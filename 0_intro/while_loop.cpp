#include <iostream>

// Within this file
namespace {
    // std::string datatype
    std::string myname() {
        std::string justin = "justin";;
        return justin;
    }
}

int main() {
    int i = 0;
    while (i < 10) {
        std::cout << myname() << std::endl;
        i++;
    }

    return 0;
}