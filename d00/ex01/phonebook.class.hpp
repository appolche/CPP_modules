#ifndef  PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook {

	public:
		Phonebook( void );
		~Phonebook( void );
		void	SetContact(int index);
		Contact	GetContact(int index) const;

	private:
		Contact _contact[8];
};

#endif
