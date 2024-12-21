#include <iostream>
#include <string>

int main() {
    int n = 5;
    for (int i  = 1; i < 5; i++) {
       std::cout << std::string(i, ' ') << std::string(n*2 + 1 - 2*i, '*') << std::string(i, ' ') << std::endl;

    }
    for (int i  = 5; i > 0; i--) {
       std::cout << std::string(i, ' ') << std::string(n*2 + 1 - 2*i, '*') << std::string(i, ' ') << std::endl;

    }

    return 0;
}