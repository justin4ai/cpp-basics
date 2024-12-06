#include <iostream>


namespace {
    std::string myname(std::string name) {
        if (name == "justin") {
            return "Yay";
        } else {
            return "Oh no";
        }
    }
}


int main() {
    
    std::string name_candidate;
    while(true) {
        
        std::cout << "Guess my name: ";
        
        // Take an user input
        std::cin >> name_candidate;

        if ("Yay" == myname(name_candidate)) {
            break;
        } 
    }

    return 0;

}