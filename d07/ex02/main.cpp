#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    // std::cout << numbers << std::endl;
    // std::cout << std::endl;

    int* mirror = new int[MAX_VAL];
    // std::cout << "Size: " << MAX_VAL << std::endl;
    // std::cout << "Array: [";
    // for (int i = 0; i < MAX_VAL; i++) {
    //     std::cout << mirror[i];
    //     if (i != MAX_VAL - 1) {
    //         std::cout << ", ";
    //     }
    // }
    // std::cout << "]" << std::endl;
    // std::cout << std::endl;

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // std::cout << "ARRAYS HAVE BEEN MODIFIED" << std::endl;
    // std::cout << numbers << std::endl;
    // std::cout << std::endl;

    // std::cout << "Size: " << MAX_VAL << std::endl;
    // std::cout << "Array: [";
    // for (int i = 0; i < MAX_VAL; i++) {
    //     std::cout << mirror[i];
    //     if (i != MAX_VAL - 1) {
    //         std::cout << ", ";
    //     }
    // }
    // std::cout << "]" << std::endl;
    // std::cout << std::endl;
    // std::cout << "TEST COPY CONSTR & = OPERATOR" << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    std::cout << "TEST OUT OF RANGE EXEPTIONS" << std::endl;
    try {
        numbers[-2] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << numbers[15] << std::endl;
    numbers[15] = 55555555;
    std::cout << numbers[15] << std::endl;
    delete [] mirror;//
    return 0;
}