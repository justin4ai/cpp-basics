#include <iostream>

using std::cout;
using std::endl;

int main() {

    int num = 20;

    // We don't have to directly access via address using pointers.
    // Instead, use reference in cpp.

    // Difference from pointer:
    // 1. You have to clarify whose reference it is unlike pointer.
    // for example,
    // int& another_a; // invalid
    // int* p; // valid (= pointer)

    // 2. Cannot change the target that the reference refers to unlike pointer.

    int& num_ref = num; // reference (1.)
    
    num_ref = 30;

    cout << "Num: " << num << endl;
    cout << "Num_ref: " << num_ref << endl;
    
}