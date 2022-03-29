#include "phonebook.class.hpp"

void	formatOutput(std::string str)
{
	std::cout << std::setw(10);
    if (str.length() > 10)
		std::cout << str.substr(0, 9).append(".");
	else
		std::cout << str;
	std::cout << std::setw(0);
}

void	headerOut() {

	formatOutput("INDEX");
	std::cout << "|";
	formatOutput("FIRST NAME");
	std::cout << "|";
	formatOutput("LAST NAME");
	std::cout << "|";
	formatOutput("NICKNAME");
	std::cout << std::endl;
}

static bool isDigitString(std::string buf) {

	return buf.find_first_not_of("0123456789") == std::string::npos;
}

static bool isValidIndex(std::string buf, int index) {

	int		ret;
	
	if (!isDigitString(buf))
		return (0);
	ret = std::atoi(&buf[0]);
	return ret >= 0 && ret <= index;
}

int	validIndex( int index ) {

	std::string	buf;

	std::cout << "Input index: ";
	std::getline( std::cin, buf );
	if (buf.length() && isValidIndex(buf, index))
		return std::atoi(&buf[0]);
	std::cout << "Error: Invalid index\n";
	return (-1);
}

void	indexInfo(Phonebook Book, int i ) {

	if ( i == -1 )
		return ;
	std::cout << "FIRST NAME: " << Book.GetContact(i).GetFirstName() << "\n";
	std::cout << "LAST NAME: " << Book.GetContact(i).GetLastName() << "\n";
	std::cout << "NICKNAME: " << Book.GetContact(i).GetNickname() << "\n";
	std::cout << "PHONE NUMBER: " << Book.GetContact(i).GetPhoneNumber() << "\n";
	std::cout << "DARKEST SECRET: " << Book.GetContact(i).GetSecret() << "\n";
}

void	SearchCmd(Phonebook Book, int max_ind) {

	headerOut();
	for (int i = 0; i <= max_ind; i++)
	{
		std::cout << std::setw(10) << i << std::setw(0);
		std::cout << "|";
		formatOutput( Book.GetContact(i).GetFirstName() );
		std::cout << "|";
		formatOutput( Book.GetContact(i).GetLastName() );
		std::cout << "|";
		formatOutput( Book.GetContact(i).GetNickname() );
		std::cout << std::endl;
	}
	if (max_ind == -1)
		return ;
	std::cout << "To see more information about contact, ";
	std::cout << "please, input index.\n";
	indexInfo( Book, validIndex( max_ind ) );
	
}

int main( void ) {

    Phonebook   Book;
	int 		index = -1;
	int			max_index = -1;
    std::string cmd;

	std::cout << "\n*******************************************\n";
	std::cout << "\tHELLO! THIS IS PHONEBOOK!\n";
	std::cout << " Please, input command ADD, SEARCH or EXIT\n";
	std::cout << "*******************************************\n\n";
	while (1)
    {
		do	{
			std::cout << "Input command: ";
			std::getline(std::cin, cmd);
		}	while (cmd.length() == 0);
        if ( cmd == "EXIT" )
            break ;
        else if ( cmd == "ADD" )
		{
			if (max_index < MAX_CONTACT - 1) max_index++;
			index =  ++index % MAX_CONTACT;
			Book.SetContact(index);
		}
        else if ( cmd == "SEARCH" )
            SearchCmd(Book, max_index );
    }
    return (0);
}
