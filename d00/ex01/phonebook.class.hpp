#ifndef  PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

# define MAX_CONTACT 8

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		
		void	addContact(int index);
		Contact	searchContact(int index) const;

	private:
		Contact contact_list[8];
};

#endif
