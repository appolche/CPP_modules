#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{
	public:
        class BadInputException : public std::exception {
            public:
                const char *what() const throw();
        };
        Convert();
		Convert(std::string input);
		Convert(Convert const & src);
		~Convert();

		double getDouble() const;
		float getFloat() const;
		int getInt() const;
		char getChar() const;

		bool getIfChar() const;
		bool getIfPossible() const;

        bool checkInput(std::string input);
		
		Convert & operator=( Convert const & rhs );

	private:
		std::string _input;
		double _double; //8
		float _float; //4
		int _int; // 4-2
		char _char; //1
        
		bool _isChar;
		bool _possible;
		
        // using explicity convertion
		void convertToDouble(); // atof
		void convertToFloat(); // static_cast<float>
		void convertToInt(); // static_cast<int>
		void convertToChar(); // static_cast<char>
		void parseInput();

};

 std::ostream &operator<<(std::ostream &os, Convert const &i);

#endif