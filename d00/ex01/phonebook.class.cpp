#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

Contact	PhoneBook::searchContact(int index) const {

	return (this->contact_list[index]);
}

void	PhoneBook::addContact(int index) {
	
	std::string	buf;

	index =  index % MAX_CONTACT;
	std::cout << "First name" << std::endl;
	std::getline(std::cin, buf);
	this->contact_list[index].setFirstName(buf);
	std::cout << "Last name" << std::endl;
	std::getline(std::cin, buf);
	this->contact_list[index].setLastName(buf);
	std::cout << "Nickname" << std::endl;
	std::getline(std::cin, buf);
	this->contact_list[index].setNickname(buf);
	std::cout << "Phone number" << std::endl;
	std::getline(std::cin, buf);
	this->contact_list[index].setPhoneNumber(buf);
	std::cout << "Darkest secret" << std::endl;
	std::getline(std::cin, buf);
	this->contact_list[index].setDarkestSecret(buf);
	std::cout << "CONTACT SUCCESSFULLY ADDED!\n";
}
