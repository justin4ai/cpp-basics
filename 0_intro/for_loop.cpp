#include <iostream>

int main() {
    
    // int i, sum = 0;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += i;
    }
    
    std::cout << "The sum is " << sum << std::endl;
    return sum;
}