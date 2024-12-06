#include <iostream>

// predefine some functions under std namespace
using std::cout;
using std::endl;
using std::cin;


int main() {
    
    int num;
    
    cout << "Info" << endl;
    cout << "1. Name" << endl;
    cout << "2. Age" << endl;
    cout << "3. Weight" << endl;

    cin >> num;
    
    switch (num) {
        case 1:
            cout << "Justin" << endl;
            break;

        case 2:
            cout << "24 years old" << endl;
            break;
        case 3:
            cout << "75kg" << endl;
            break;
        default:
            cout << "Invalid number. Try again" << endl;
            break;
    }

    return 0;

}