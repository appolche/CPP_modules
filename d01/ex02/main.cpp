#include <iostream>
#include <string>

int main() {
    
    std::string str = "HI THIS IS BRAIN";
    std::cout << str << std::endl;
    std::string *stringPTR = &str; // POINTER
    std::cout << stringPTR << std::endl;
    std::string &stringREF = str; // REFERENCE
    std::cout << stringREF << std::endl;
    std::cout << &stringREF << std::endl;

    return (0);
}