#include <iostream>
#include <string>
#include <fstream>

void info() {
    std::cout << "BearShellCPP v0.0.1";
    std::cout << "Copyright B. Fellner / @CPElite (github.com)";
}

void echo() {
    std::string echo;
    std::cout << "Please enter something to get it echoed back: ";
    std::cin >> echo;
    std::cout << echo << "\n";
}

void commlist() {
    std::cout << "The following commands are available: info - displays information about the shell. \necho - echoes user entry back. \ncommlist - shows this list. \nrfile - reads from a specified file.";
}

void clearscreen() {
    system("clear");
}

void readfile() {
    std::string mytext;
    std::string filepath;
    std::cout << "Please enter the filename:";
    std::cin >> filepath; 
    std::fstream FileToRead(filepath);
    while (getline (FileToRead, mytext)) {
        std::cout << mytext;
        //FileToRead.close();
    }
    FileToRead.close();
    std::cout << "\n";

}

int main(int, char**)
{
    std::string input;

    while (true)
    {
        std::cout << "BearShellCPP - please enter a command to continue." << std::endl;
        std::cin >> input;
        if (input == "info")
        {
            info();
        }
        else if (input == "echo")
        {
            echo();
        }
        else if (input == "commlist") {
            commlist();
        }
        else if (input == "cls") {
            clearscreen();
        }
        else if (input == "rfile") {
            readfile();
        }
        else if (input == "exit") {
            break;
        }
        else
        {
            std::cout << "Unrecognized command. Please type help for a list of commands." << input << std::endl;
        }
    }

    return 0;
}