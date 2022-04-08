#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

    public:
	    Fixed();
	    Fixed(Fixed const & src); //конструктор копирования
	    ~Fixed();
	    Fixed & operator=(Fixed const & src); //оператор

    	int		getRawBits() const;
    	void	setRawBits(int const raw);

    private:
    	static const int	nbits = 8;
    	int					value;
        
};

#endif