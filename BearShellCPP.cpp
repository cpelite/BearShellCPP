#include <iostream>
#include <string>

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
    std::cout << "The following commands are available: info - displays information about the shell. \necho - echoes user entry back. \ncommlist - shows this list.";
}

void clearscreen() {
    system("cls");
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
        else
        {
            std::cout << "Unrecognized command. Please type help for a list of commands." << input << std::endl;
        }
    }

    return 0;
}