#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
	public:
		Contact();
		void addContact(int index);
		void printContact(void);
		void showPhonebook(void);
		void printFieldSimple(std::string field, std::string message);
		void printField(std::string);
		int  checkValid(void);

	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string number;
		std::string birthdate;
		std::string favourite_meal;
		std::string underwear_color;
		std::string darkest_secret;
		bool valid;
};

	void printRules(void);
	void printPhonebookHeader(void);
#endif