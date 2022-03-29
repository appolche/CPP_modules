#include "Contact.class.hpp"

Contact::Contact() {}

Contact::~Contact() {}


std::string Contact::GetFirstName() {

	return (this->first_name);
}

std::string Contact::GetLastName() {

	return (this->last_name);
}

std::string Contact::GetNickname() {

	return (this->nickname);
}

std::string Contact::GetPhoneNumber() {

	return (this->phone_number);
}

std::string Contact::GetSecret() {

	return (this->darkest_secret);
}

void	Contact::SetFirstName( std::string s ) {
	this->first_name = s;
}

void	Contact::SetLastName( std::string s ) {
	this->last_name = s;
}

void	Contact::SetNickname( std::string s ) {
	this->nickname = s;
}

void	Contact::SetPhoneNumber( std::string s ) {
	this->phone_number = s;
}

void	Contact::SetSecret( std::string s ) {
	this->darkest_secret = s;
}
