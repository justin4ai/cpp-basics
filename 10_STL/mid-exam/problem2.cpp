#include <iostream>
#include <vector>
#include <string>

int main() {
    
    std::vector<std::string> G = {"Albert Einstein", "Stephen Hawking", "Ralph Emerson", "Antoine Lavoisier", "Junyeong F. Ahn", "Justin Python Lee", "Richard Feynman"}; 
    std::vector<std::string> new_G;  

    for (std::vector<std::string>::iterator itr = G.begin(); itr != G.end(); ++itr) {
        std::string& interim = *itr; 
        
        int cnt = 0;
        int mid_len = 0;
        std::string str = "";
        for (const char& i : interim) {
            
            if (i == ' ') {
                cnt++;
                if (cnt == 2) {
                    str = str.substr(0, str.size() - mid_len);
                }

            }

            str += i;
            if (cnt == 1) {
                mid_len++;
            }

        }
        
        new_G.push_back(str);
    }

    for (const auto& name : new_G) {
        std::cout << name << std::endl;
    }

    return 0;

}

// print끼리 and