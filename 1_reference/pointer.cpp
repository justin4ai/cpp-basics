#include <iostream>

// * for pointer
int change_val(int *p) {
    
    // * for dereference
    *p = 30;
    return 0;
}

int main() {

    int num = 20;
    int *k = &num; // pointer
    change_val(k);
    
    std::cout << "Change number from 20: " << num << std::endl;
    return 0;

}