#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

    public:
	    Fixed();
	    Fixed(Fixed const & src);
	    ~Fixed();
	    Fixed & operator=(Fixed const & rhs);

    	int		getRawBits() const;
    	void	setRawBits(int const raw);

    private:
    	static const int	nbits = 8;
    	int					value;
        
};

#endif