#include <iostream>
#include <cctype>
#include <string>
#include "Contact.hpp"

int main(void)
{
    std::string route;
    Contact contactArr[9];
    int index = 0;

// Graphic name
    std::cout << "\nWELCOME TO:\n\n";
	std::cout << " _____        _         _                   _        _____   _                              _                     _  \n";  
	std::cout << "|_   _|      (_)       | |                 ( )      | ___ \\ | |                            | |                   | |  \n"; 
	std::cout << "  | |   _ __  _   ___  | |_   _   _  _ __  |/  ___  | |_/ / | |__     ___    _ __     ___  | |__    ___    ___   | | __\n";
	std::cout << "  | |  |  __|| | / __| | __| | | | ||  _  \\  / __|  |  __/  |  _ \\   / _ \\  |  _ \\   / _ \\ |  _ \\  / _ \\  / _ \\  | |/ /\n";
	std::cout << "  | |  | |   | | \\__ \\ | |_  | |_| || | | |  \\__ \\  | |     | | | | | (_) | | | | | |  __/ | |_)| | (_) || (_) | |   < \n";
	std::cout << "  \\_/  |_|   |_| |___/  \\__|  \\__  ||_| |_|  |___/  \\_|     |_| |_|  \\___/  |_| |_|  \\___| |____/  \\___/  \\___/  |_|\\_\\\n";
	std::cout << "                               __/ | \n";                                                                           
	std::cout << "                              |___/  \n\n";                                                                          

 // Switchboard for commands entered, will run till 'EXIT' command
    printRules();
    while (1)
    {
        std::getline (std::cin, route);
        if (route == "ADD"){
			if (index < 8)
			{
            	contactArr[index].addContact(index);
				index++;
			}
			else
				std::cout << "Maximum Number Of Contacts Reached!\n";
        }
        else if (route == "SEARCH"){
            if (index > 0)
            {
                printPhonebookHeader();
                for (int dex = 0; dex < 8; dex++)
			        contactArr[dex].showPhonebook();
                std::cout << "Input the Index of the contact you would like to view:\n";
                std::getline (std::cin, route);
                if (contactArr[std::atoi(route.c_str())].checkValid() && isdigit(std::atoi(route.c_str())))
                    contactArr[std::atoi(route.c_str())].printContact();
                else
                    std::cout << "Invalid index, returning to main command menue (Type 'c' to show commands)\n";
            }
            else
            std::cout << "No Conatcts in Phonebook\n";
        }
        else if(route == "EXIT")
        {
            std::cout << "Good Bye\n";
            break;
        }
		else if (route == "c")
			printRules();
        else
            std::cout << "Invalid command please try again\n";
    }
    return 0;
}

void printRules(void)
{
	std::cout << "Please enter one of the following commands:\n";                                                        
    std::cout << "'ADD'- For a new contact\n";
    std::cout << "'SEARCH'- To search for an existing contact\n";
    std::cout << "'EXIT'- To quit the program\n";
}
void printPhonebookHeader(void)
{
	std::cout << "\n";
	std::cout << "|  " << "index" << "   |first name|last name | nickname |\n";
	std::cout << "|  " << "        |          |          |          |\n";
}
//Things to do:
//1. Refine 'SEARCH' command
//2. Test array size max
//3. Add filters/restrictions for name and number input fileds