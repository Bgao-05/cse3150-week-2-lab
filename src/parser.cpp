#include "parser.h"
#include <string>

namespace StringUtils {
	void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
		size_t pos = fullName.find(' ');
		*firstName = fullName.substr(0, pos);
		*lastName = fullName.substr(pos + 1);
	}

	std::string getUsername(const std::string& email) {
		size_t at_pos = email.find("@");
		return email.substr(0, at_pos);
	}
}
