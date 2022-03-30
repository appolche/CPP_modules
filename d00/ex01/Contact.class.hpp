#ifndef  CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

    public:
        Contact();
        ~Contact();
		
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		void setFirstName(std::string s);
		void setLastName(std::string s);
		void setNickname(std::string s);
		void setPhoneNumber(std::string s);
		void setDarkestSecret(std::string s);

    private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
