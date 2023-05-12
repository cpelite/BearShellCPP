#include <iostream>
#include <string>
#include "comms.h"
#include "calc.h"

int main(int, char**)
{
    std::string input;
    std::string username;

    while (true)
    {
        //Attention: wacky shit starts here.
        std::fstream FileToRead("settings.conf");
        std::string username;
        while (getline(FileToRead, username)) {
            FileToRead.close();
        }
        //wacky shit ends here.

        std::cout << "BearShellCPP - v1.0" << std::endl;
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
        else if (input == "help") {
            help();
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
        else if (input == "mkfile") {
            mkfile();
        }
        else if (input == "filemod") {
            filemod();
        }
        else if (input == "workdir") {
            workingdir();
        }
        else if (input == "rmfile") {
            rmfile();
        }
        else if (input == "calc") {
            calc();
        }
        else if (input == "changeshellusr") {
            changeshellusr();
        }
        else
        {
            std::cout << "Unrecognized command. Please type help for a list of commands." << std::endl;
        }
    }

    return 0;
}