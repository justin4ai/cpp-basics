#include <iostream>
#include <vector>

int main() {
    int n = 27;

    std::vector<int> output;

    for (int i = 1; i < n - 5; i = i + 5) {
        std::vector<int> aux_container;

        for (int j = i; j < i + 5; j ++) {
            aux_container.push_back(j); 
        }

        output.insert(output.end(), aux_container.begin(), aux_container.end());

    }

    for (const int& val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

}