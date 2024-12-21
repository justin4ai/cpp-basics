#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> G = {"Albert Einstein", "Stephen Hawking", "Ralph Emerson", "Antoine Lavoisier", "Junyeong F. Ahn", "Justin Python Lee", "Richard Feynman"}; 
    std::vector<std::string> new_G;  

    for (const std::string& name : G) {
        size_t last_space = name.find_last_of(' '); 

        if (last_space != std::string::npos) {
            new_G.push_back(name.substr(0, last_space)); 
            
        } else {
            new_G.push_back(name); 
        }
    }

    for (const auto& name : new_G) {
        std::cout << name << std::endl;
    }

    return 0;
}