#include "Iter.hpp"

int main() {

    const char *str = "hello world";
    int arr[] = {1, 2, 3, 4, 5};

    iter<int>(arr, 5, printElement);
    iter<char>(str, strlen(str), printElement);

    return 0;
}