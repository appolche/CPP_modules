#include "PhoneBook.class.hpp"

static bool isDigitString(std::string buf) {

	return (buf.find_first_not_of("0123456789") == std::string::npos);
}

static bool isValidIndex(std::string buf, int index) {

	int		ret;
	
	if (!isDigitString(buf))
		return (false);
	ret = std::atoi(&buf[0]);
	if (ret >= 0 && ret <= index)
		return (true);
	else
		return (false);
}

static int	validIndex(int index) {

	std::string	buf;

	std::cout << "Index: ";
	std::getline(std::cin, buf);
	if (buf.length() && isValidIndex(buf, index))
		return (std::atoi(&buf[0]));
	std::cout << "Error: Invalid index\n";
	return (-1);
}

static void	printContactInfo(PhoneBook book, int i) {

	Contact currentContact = book.searchContact(i);
	std::cout << "FIRST NAME: " << currentContact.getFirstName() << std::endl;
	std::cout << "LAST NAME: " << currentContact.getLastName() << std::endl;
	std::cout << "NICKNAME: " << currentContact.getNickname() << std::endl;
	std::cout << "PHONE NUMBER: " << currentContact.getPhoneNumber() << std::endl;
	std::cout << "DARKEST SECRET: " << currentContact.getDarkestSecret() << std::endl;
}

void	formatOutput(std::string str) {

	std::cout << std::setw(10);
    if (str.length() > 10)
		std::cout << str.substr(0, 9).append(".");
	else
		std::cout << str;
	std::cout << std::setw(0);
}

static void	headerOut() {

	formatOutput("INDEX");
	std::cout << "|";
	formatOutput("FIRST NAME");
	std::cout << "|";
	formatOutput("LAST NAME");
	std::cout << "|";
	formatOutput("NICKNAME");
	std::cout << std::endl;
}

static void	searchCmd(PhoneBook book, int contactCount) {

	headerOut();
	if (contactCount == -1){
		std::cout << "\n\tYour Phonebook is empty!\n"<< std::endl;
		return ;
	}
	for (int i = 0; i <= contactCount; i++){
		std::cout << std::setw(10) << i << std::setw(0);
		std::cout << "|";
		formatOutput(book.searchContact(i).getFirstName());
		std::cout << "|";
		formatOutput(book.searchContact(i).getLastName());
		std::cout << "|";
		formatOutput(book.searchContact(i).getNickname());
		std::cout << std::endl;	
	}
	std::cout << "To see more information about contact, ";
	std::cout << "please, input index.\n";
	int inputIndex = validIndex(contactCount);
	if (inputIndex == -1)
		return ;
	printContactInfo(book, inputIndex);
}

static void print_greeting()
{
	std::cout << "\n*******************************************\n";
	std::cout << "\tHELLO! THIS IS PHONEBOOK!\n";
	std::cout << " Please, input command ADD, SEARCH or EXIT\n";
	std::cout << "*******************************************\n\n";
}

int main() {

    PhoneBook   book;
    std::string cmd;
	int 		index = -1;
	int			contactCount = -1;

	print_greeting();
	while (1) {
		std::cout << "Input command: ";
		std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            break ;
        else if (cmd == "ADD") {
			if (contactCount < MAX_CONTACT - 1) 
				contactCount++;
			book.addContact(++index);
		}
        else if (cmd == "SEARCH")
            searchCmd(book, contactCount);
    }
    return (0);
}
