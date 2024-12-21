#include <iostream>


int main() {

    int x = 1;

    for (int i = 2; i < 14; i++) {
        x = x + i;
        std::cout << x << std::endl; 

        if (x == 55) {
            x = 3;
        }
    }
}