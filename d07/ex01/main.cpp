#include "Iter.hpp"
#include <iostream>


class Awesome {
    
    public:
        Awesome(void): _n(42) { return; }
        int get(void) const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<(std::ostream & os, const Awesome &rhs) { os << rhs.get(); return os; }

template <typename T>
void print (T const & x) { std::cout << x << std::endl; return; }

// template <typename T>
// void printElement(const T& element) {
//     std::cout << element;
// }

int main() {

    // const char *str = "hello world";
    // int arr[] = {1, 2, 3, 4, 5};
    int tab[] = {1, 2, 3, 4, 5};
    Awesome tab2[5];

    iter (tab, 5, print);
    iter (tab2, 5, print);
    // iter<int>(arr, 5, &printElement);
    // std::cout << std::endl;
    // iter<char>(str, strlen(str), &printElement);

    return 0;
}