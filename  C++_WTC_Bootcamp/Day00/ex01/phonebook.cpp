#include <iostream>
#include <cctype>
#include <string>

int main(void)
{
    std::string command;
    std::cout << "Welcome to:\n\n";
 
 std::cout << " _____        _         _                   _        _____   _                              _                     _  \n";  
std::cout << "|_   _|      (_)       | |                 ( )      | ___ \\ | |                            | |                   | |  \n"; 
std::cout << "  | |   _ __  _   ___  | |_   _   _  _ __  |/  ___  | |_/ / | |__     ___    _ __     ___  | |__    ___    ___   | | __\n";
std::cout << "  | |  |  __|| | / __| | __| | | | ||  _  \\  / __|  |  __/  |  _ \\   / _ \\  |  _ \\   / _ \\ |  _ \\  / _ \\  / _ \\  | |/ /\n";
std::cout << "  | |  | |   | | \\__ \\ | |_  | |_| || | | |  \\__ \\  | |     | | | | | (_) | | | | | |  __/ | |_)| | (_) || (_) | |   < \n";
std::cout << "  \\_/  |_|   |_| |___/  \\__|  \\__  ||_| |_|  |___/  \\_|     |_| |_|  \\___/  |_| |_|  \\___| |____/  \\___/  \\___/  |_|\\_\\\n";
std::cout << "                               __/ | \n";                                                                           
std::cout << "                              |___/  \n";                                                                          
                                                            
    std::cout << "'ADD'- For a new contact\n";
    std::cout << "'SEARCH'- To search for an existing contact\n";
    std::cout << "'EXIT'- To quit the program\n";
 
    while (1)
    {
        std::getline (std::cin, command);
        if (command == "SEARCH" || command == "ADD"){
            std::cout << "GOOD LOOP\n";
        }
        else if(command == "EXIT")
        {
            std::cout << "Good Bye\n";
            break;
        }
        else
            std::cout << "Invalid command please try again\n";
    }
    return 0;
}