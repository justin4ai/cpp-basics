#include <iostream>

int main() {

    // {
    //     int i = 4;
    //     std::cout << i << std::endl;
    // }

    // std::cout << i << std::endl; // error: variable vanishes outside {}


    // another example..


    int a = 4;
    {
        std::cout << "외부의 변수 1" << a << std::endl; // 4
        int a = 3;
        std::cout << "내부의 변수 " << a << std::endl; // 3
    }

    std::cout << "외부의 변수 2" << a << std::endl; // 4
}

