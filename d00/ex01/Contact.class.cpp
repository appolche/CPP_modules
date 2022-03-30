#include "Contact.class.hpp"

Contact::Contact() {}

Contact::~Contact() {}


std::string Contact::getFirstName() const {

	return (this->first_name);
}

std::string Contact::getLastName() const {

	return (this->last_name);
}

std::string Contact::getNickname() const {

	return (this->nickname);
}

std::string Contact::getPhoneNumber() const {

	return (this->phone_number);
}

std::string Contact::getDarkestSecret() const {

	return (this->darkest_secret);
}

void	Contact::setFirstName(std::string s) {

	this->first_name = s;
}

void	Contact::setLastName(std::string s) {

	this->last_name = s;
}

void	Contact::setNickname(std::string s) {

	this->nickname = s;
}

void	Contact::setPhoneNumber(std::string s) {

	this->phone_number = s;
}

void	Contact::setDarkestSecret(std::string s) {
	
	this->darkest_secret = s;
}
