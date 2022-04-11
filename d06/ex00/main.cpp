#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Error: Usage: ./convert <value_to_convert>" << std::endl;
        return (1);
    }
    std::string input = argv[1];
    try {
        Convert c(input);
        std::cout << c;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    return (0);
}

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0