#include <iostream>

int change_val(int& p) {
    p = 30;
    return 0;
}
// 3. Reference may not exist in memory space unlike pointer

int main() {
    
    int num = 20;
    int& num_ref = num;

    std::cout << num << std::endl;
    change_val(num_ref);
    std::cout << num << std::endl;

    return 0;
}