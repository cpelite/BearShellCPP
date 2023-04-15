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
    std::cout << "The following commands are available: info - displays information about the shell. \necho - echoes user entry back. \ncommlist - shows this list. \nrfile - reads from a user specified file. \nlyrica - reads from lyrica.txt.";
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

void lyrica() {
    std::fstream FileToRead("lyrica.txt");
    char ch;
    while ( FileToRead ) {
        FileToRead.get(ch);
        std::cout << ch;
    }
    std::cout << std::endl;
}

int main(int, char**)
{
    std::string input;
    std::string username;

    std::cout << "Please enter a username for this session: ";
    std::cin >> username;

    while (true)
    {
        std::cout << "BearShellCPP - v0.0.1" << std::endl;
        std::cout << "[" <<username << "|bscpp]$ " ;
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
        else if (input == "lyrica") {
            lyrica();
        }
        else
        {
            std::cout << "Unrecognized command. Please type help for a list of commands." << std::endl;
        }
    }

    return 0;
}