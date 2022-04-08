#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

    public:
	    Fixed();
		Fixed(int const		n);
		Fixed(float const	n);

		
	    Fixed(Fixed const & src);
	    ~Fixed();
	    Fixed & operator=(Fixed const & rhs);

    	int		getRawBits() const;
    	void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

    private:
    	static const int	nbits = 8;
    	int					value;
        
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif