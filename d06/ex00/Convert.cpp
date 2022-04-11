#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string input) {
    if (!checkInput(input))
        throw BadInputException();
    this->_input = input;
	parseInput();
}

Convert::Convert(const Convert &rhs) {
	*this = rhs;
}

Convert::~Convert() {}

Convert &Convert::operator=(Convert const &rhs) {
	this->_input = rhs._input;
	return *this;
}

void Convert::parseInput() {
	convertToDouble();
	convertToFloat();
	if (this->_input == "nan" || 
        this->_input == "nanf" || 
        this->_input == "-inff" || 
        this->_input == "+inff" || 
        this->_input == "-inf" || 
        this->_input == "+inf")
    {
		this->_possible = false;
		return;
	}
	else {
		this->_possible = true;
		convertToInt();
		convertToChar();
	}
}

bool Convert::checkInput(std::string input) {

    if (input == "nan" || input == "nanf" ||
		input == "+inf" || input == "+inff" ||
		input == "-inf" || input == "-inff") 
	{
	    return true;
	}

	int dots = 0;
	size_t size = input.size();
	for (size_t i = 0; i < size; ++i) {
		char c = input[i];
		if (!std::isdigit(c) && (
			(c != '-' && i == 0) || 
			(c != '.' && i > 0 && i + 1 != size) ||
			(c != 'f' && i + 1 == size)
		)) {
			return false;
		}
		if (c == '.') {
			dots++;
			if (dots > 1 || !std::isdigit(input[i + 1])) {
				return false;
			}
		}
	}
	return true;
}

// converters

void Convert::convertToDouble() {
	this->_double = std::atof(this->_input.c_str());
}

void Convert::convertToFloat() {
	this->_float = static_cast<float>(this->_double);
}

void Convert::convertToInt() {
	this->_int = static_cast<int>(this->_float);
}

void Convert::convertToChar() {
	if (std::isprint(this->_int) && (this->_float - this->_int == 0)) {
		this->_char = static_cast<char>(this->_int);
		this->_isChar = true;
	}
	else
		this->_isChar = false;
}

// getters
char Convert::getChar() const {
	return this->_char;
}

int Convert::getInt() const {
	return this->_int;
}

float Convert::getFloat() const {
	return this->_float;
}

double Convert::getDouble() const {
	return this->_double;
}

//checkers for char and 
bool Convert::getIfChar() const {
	return this->_isChar;
}

bool Convert::getIfPossible() const {
	return this->_possible;
}

// overloaded <<
std::ostream &operator<<(std::ostream &os, Convert const &i) {

    if (i.getIfPossible() == true) {

		if (i.getIfChar() == true)
			os << "char: '" << i.getChar() << "'" << std::endl;
		else
			os << "char: Non displayable" << std::endl; //means that char is belongs to non dispplayable ascii chars

		os << "int: " << i.getInt() << std::endl;
	}
	else {
		os << "char: impossible" << std::endl;
		os << "int: impossible " << std::endl;
	}

	if (i.getFloat() - i.getInt() == 0){
		os << "float: " << i.getFloat() << ".0f" << std::endl;
		os << "double: " << i.getDouble() << ".0" << std::endl;
	}
	else {
		os << "float: " << i.getFloat() << "f" << std::endl;
		os << "double: " << i.getDouble() << std::endl;
	}
	return os;
}

const char *Convert::BadInputException::what() const throw() {
	return "Bad input!";
}