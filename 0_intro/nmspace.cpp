#include <iostream>
// using namespace std; // not recommended

// int main() {
//     std::cout << "My name is" << " Justin." << std::endl;
//     return 0;
// }

// int main() {
//     cout << "My name is" << " Justin!" << endl;
//     return 0;
// }


namespace { // defining namespace without an actual name = can be used freely without clarifying namespace within this file
    int age() {
        return 24;
    }
}


int main() {
    std::cout << "My name is" << " Justin!" << std::endl;
    std::cout << "I am " << age() << " years old." << std::endl;
    return 0;
}