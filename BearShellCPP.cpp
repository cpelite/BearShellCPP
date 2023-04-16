#include <iostream>
#include <string>
#include <fstream>
#include "comms.cpp"

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
        else if (input == "mkfile") {
            mkfile();
        }
        else if (input == "filemod") {
            filemod();
        }
        else
        {
            std::cout << "Unrecognized command. Please type commlist for a list of commands." << std::endl;
        }
    }

    return 0;
}