#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

Contact	PhoneBook::searchContact(int index) const {

	return (this->contactArray[index]);
}

std::string PhoneBook::addContactParameter(std::string parameter){
	
	std::string	buf;

	while (1){

		std::cout << parameter << std::endl;
		std::getline(std::cin, buf);
		if (!(buf.empty()))
			break;
	}
	return (buf);
}

void	PhoneBook::addContact(int index) {
	
	std::string	buf;

	index =  index % MAX_CONTACT;
	buf = this->addContactParameter("First name");
	this->contactArray[index].setFirstName(buf);
	buf = this->addContactParameter("Last name");
	this->contactArray[index].setLastName(buf);
	buf = this->addContactParameter("Nickname");
	this->contactArray[index].setNickname(buf);
	buf = this->addContactParameter("Phone number");
	this->contactArray[index].setPhoneNumber(buf);
	buf = this->addContactParameter("Darkest secret");
	this->contactArray[index].setDarkestSecret(buf);
	std::cout << "CONTACT SUCCESSFULLY ADDED!\n";
}
