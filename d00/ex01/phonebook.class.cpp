#include "phonebook.class.hpp"

Phonebook::Phonebook() {}

Phonebook::~Phonebook() {}

Contact	Phonebook::GetContact(int index) const{

	return this->_contact[index];
}

void	Phonebook::SetContact(int index) {

	std::string	buf;

	std::cout << "Input first name" << std::endl;
	std::getline( std::cin, buf );
	this->_contact[index].SetFirstName(buf);
	std::cout << "Input last name" << std::endl;
	std::getline( std::cin, buf );
	this->_contact[index].SetLastName(buf);
	std::cout << "Input nickname" << std::endl;
	std::getline( std::cin, buf );
	this->_contact[index].SetNickname(buf);
	std::cout << "Input phone number" << std::endl;
	std::getline( std::cin, buf );
	this->_contact[index].SetPhoneNumber(buf);
	std::cout << "Input darkest secret" << std::endl;
	std::getline( std::cin, buf );
	this->_contact[index].SetSecret(buf);
	std::cout << "CONTACT SUCСESSFULLY ADDED!\n";
}
