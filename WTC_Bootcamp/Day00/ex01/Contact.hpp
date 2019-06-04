#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
	public:
		Contact();
		void addContact(void);
		void showDetails(void);
	private:
		std::string first_name;
		std::string last_name;
		std::string number;
		bool valid;
};

	void printRules(void);
#endif