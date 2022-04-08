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
		
		static Fixed &min(Fixed &f, Fixed &s);
		static Fixed &max(Fixed &f, Fixed &s);
		static const Fixed &min(const Fixed &f, const Fixed &s);
		static const Fixed &max(const Fixed &f, const Fixed &s);

		// comparison operators: операторы сравнения
		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		// arithmetic operators
		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;

		// increment/decrement operators
		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);


    private:
    	static const int	nbits = 8;
    	int					value;
        
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif