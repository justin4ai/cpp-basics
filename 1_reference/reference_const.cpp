#include <iostream>

// int main_() {
//     int &ref = 4; // referencing literal is impossible. If possible, we can change the value of literals.

//     std::cout << ref << std::endl;
// }

int main() {
    const int &ref = 4; // if defined as const, then it is okay.

    std::cout << ref << std::endl;
}