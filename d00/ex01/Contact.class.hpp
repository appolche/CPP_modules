#ifndef  CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

# define MAX_CONTACT 8

class Contact {

    public:
        Contact();
        ~Contact();
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickname();
		std::string GetPhoneNumber();
		std::string GetSecret();
		void SetFirstName(std::string s);
		void SetLastName(std::string s);
		void SetNickname(std::string s);
		void SetPhoneNumber(std::string s);
		void SetSecret(std::string s);

    private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

};

#endif
