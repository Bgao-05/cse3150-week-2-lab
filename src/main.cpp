#include <iostream>
#include <string>
#include "parser.h"

int main() {
	std::string fullName;
	std::string email;
	std::cout << "Enter Your Full Name: ";
	std::getline(std::cin, fullName);
	std::cout << "Enter Your Email Address: ";
        std::getline(std::cin, email);

	std::string* firstName = new std::string;
	std::string* lastName = new std::string;
	
	StringUtils::parseName(fullName, firstName, lastName);

	std::cout << "\nFirst Name: " << *firstName << "\n";
	std::cout << "Last Name: " << *lastName << "\n";
	std::cout << "Username: " << StringUtils::getUsername(email) << "\n";

	delete firstName;
	delete lastName;
	return 0;
}
