#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x;
    int& y = x;

    // We don't have to define reference of reference. The following is enough.
    int& z = y;

    x = 1;
    cout << "x: " << x << "y: " << y << "z: " << z << endl;
    y = 2;
    cout << "x: " << x << "y: " << y << "z: " << z << endl;
    z = 3;
    cout << "x: " << x << "y: " << y << "z: " << z << endl;

    return 0;

}