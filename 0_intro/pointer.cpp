#include <iostream>


int main() {

    int arr[10];

    // Pointers save memory address
    int *parr = arr;
    // int *parr = &arr[0];

    // The following three are the same
    // Since the array name = memory address(&) of first element

    std::cout << "parr: " << parr << std::endl;
    std::cout << "arr: " << arr << std::endl;
    std::cout << "&arr[0]: " << &arr[0]  << std::endl;


    // If you want to refer to the actual value of the address,
    // Dereference:
    std::cout << *parr << std::endl;

    // int i;
    // int *pi = &i;

}