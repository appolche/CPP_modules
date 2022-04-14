#include "Whatever.hpp"
#include <iostream>

class Awesome {
    public:
        Awesome(void): _n(0) {};
        Awesome(int n): _n(n) {};
        Awesome & operator=(Awesome & a) {_n = a._n; return *this; }
        bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); }
        bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
        bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); }
        bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n); }
        bool operator>=(Awesome const & rhs) const { return (this->_n >= rhs._n); }
        bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
        int get_n() const { return _n; }

    private:
        int _n;
};

std::ostream & operator<<(std::ostream & os, const Awesome &a) { os << a.get_n(); return os; }

int main( void ) {

    {   
        int a = 1;
        int b = 2;
        std::cout << "Before swap: " << a << " " << b << std::endl;
        swap( a, b );
        std::cout << "After swap: " << a << " " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    }
    std::cout << std::endl;

    std::string c = "string1";
    std::string d = "string";
    std::cout << "Before swap: " << c << " " << d << std::endl;
    swap(c, d);
    std::cout << "After swap: " << c << " " << d << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << std::endl;

    Awesome a(2), b(4);
    std::cout << "Before swap: " << a << " " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: " << a << " " << b << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    return 0;
}