#include <iostream>
#include <string>
#include "comms.h"

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

        std::cout << "BearShellCPP - v0.0.2" << std::endl;
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
        else
        {
            std::cout << "Unrecognized command. Please type commlist for a list of commands." << std::endl;
        }
    }

    return 0;
}