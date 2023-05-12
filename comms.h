#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <filesystem>

namespace fs = std::filesystem;

void info() {
    std::cout << "BearShellCPP v0.0.2 - Ascendere!";
    std::cout << "Copyright B. Fellner / @CPElite (github.com)";
}

void echo() {
    std::string echo;
    std::cout << "Please enter something to get it echoed back: ";
    std::cin >> echo;
    std::cout << echo << "\n";
}

void help() {
    std::cout << "The following commands are available: info - displays information about the shell. \necho - echoes user entry back. \ncommlist - shows this list. \nrfile - reads from a user specified file. \nlyrica - reads from lyrica.txt. \nmkfile - creates a file. \nfilemod - modifies a file. \nworkdir - gets the current working directory. \ncalc - opens the built-in calculator. \nchangeshellusr - allows to change username, writes change to settings.conf. \nwincalc - starts the windows calculator." << std::endl;
}

void clearscreen() {
    system("cls");
}

void readfile() {
    std::string mytext;
    std::string filepath;
    std::cout << "Please enter the filename:";
    std::cin >> filepath;
    std::fstream FileToRead(filepath);
    while (getline(FileToRead, mytext)) {
        std::cout << mytext;
        //FileToRead.close();
    }
    FileToRead.close();
    std::cout << "\n";

}

void lyrica() {
    std::fstream FileToRead("lyrica.txt");
    char ch;
    while (FileToRead) {
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

void workingdir() {
    std::cout << "The current working directory is: " << std::endl;
    std::cout << fs::current_path() << std::endl;
}

void rmfile() {
    std::string filename;
    std::cout << "Please enter the name of the file to be deleted:" << std::endl;
    std::cin >> filename;
    fs::remove(filename);
}

void changeshellusr() {
    std::fstream conf_file("settings.conf");
    std::string finput;
    std::cout << "Please enter a new username: ";
    std::cin.ignore();
    std::getline(std::cin, finput);
    conf_file << finput;
    conf_file.close();
}

void wincalc() {
    system("calc");
}