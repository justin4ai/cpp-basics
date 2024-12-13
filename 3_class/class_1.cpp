#include <iostream>

class Animal {

    private:
        int food;
        int weight;
    
    public:
        void set_data(int _food, int _weight) {
            food = _food;
            weight = _weight;
        }

        void increase_food(int inc) {
            food += inc;
            weight += (inc / 3);
        }

        void view_stats() {
            std::cout << "food: " << food << std::endl;
            std::cout << "weight: " << weight << std::endl;
        }

};

int main() {
    Animal animal;

    animal.set_data(100, 40);
    animal.increase_food(48);

    animal.view_stats();
    return 0;
}