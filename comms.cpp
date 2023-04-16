#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

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
    std::cout << "The following commands are available: info - displays information about the shell. \necho - echoes user entry back. \ncommlist - shows this list. \nrfile - reads from a user specified file. \nlyrica - reads from lyrica.txt. \nmkfile - creates a file. \nfilemod - modifies a file.";
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

void mkfile() {
    std::string filename;
    std::cout << "Please enter the name of the new file: ";
    std::cin >> filename;
    std::fstream myfile(filename);
    myfile.close();
}

void filemod() {
    std::string filename;
    std::string finput;
    std::cout << "Please enter the name of the file you want to edit:";
    std::cin >> filename;
    std::fstream myfile(filename);
    std::cout << "Please enter text: ";
    std::cin.ignore();
    std::getline(std::cin, finput);
    myfile << finput;
    myfile.close();
}