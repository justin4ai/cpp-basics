#include <iostream>

typedef struct Animal {
  char name[30]; 
  int age;       
  int health; 
  int food;  
  int clean;  
} Animal;

void create_animal(Animal *animal) { // pointer로 받아야 직접 수정 가능
  std::cout << "동물의 이름? ";
  std::cin >> animal->name; // (*animal).name 과 동일

  std::cout << "동물의 나이? ";
  std::cin >> animal->age;

  animal->health = 100;
  animal->food = 100;
  animal->clean = 100;
}

void play(Animal *animal) {
  animal->health += 10;
  animal->food -= 20;
  animal->clean -= 30;
}
void one_day_pass(Animal *animal) {
  // 하루가 지나면
  animal->health -= 10;
  animal->food -= 30;
  animal->clean -= 20;
}
void show_stat(Animal *animal) {
  std::cout << animal->name << "의 상태" << std::endl;
  std::cout << "체력    : " << animal->health << std::endl;
  std::cout << "배부름 : " << animal->food << std::endl;
  std::cout << "청결    : " << animal->clean << std::endl;
}
int main() {
  Animal *list[10]; // Animal 구조체의 포인터 10개짜리 배열 (정적임 !!!)
  int animal_num = 0;

  for (;;) {
    std::cout << "1. 동물 추가하기" << std::endl;
    std::cout << "2. 놀기 " << std::endl;
    std::cout << "3. 상태 보기 " << std::endl;

    int input;
    std::cin >> input;

    switch (input) {
      int play_with;
      case 1:
        list[animal_num] = new Animal; //new는 동적 메모리를 할당한 후 그 메모리의 주소를 반환 -> 정적 배열에 각 요소를 동적으로 할당
        create_animal(list[animal_num]);

        animal_num++;
        break;
      case 2:
        std::cout << "누구랑 놀게? : ";
        std::cin >> play_with;

        if (play_with < animal_num) play(list[play_with]); // 아 이렇게 play(list[play_with]) 대신에 list[play_with]->play()가 되면 좋겠다! 왜냐면 ->는 *(). 과 같으니

        break;

      case 3:
        std::cout << "누구껄 보게? : ";
        std::cin >> play_with;
        if (play_with < animal_num) show_stat(list[play_with]);
        break;
    }

    for (int i = 0; i != animal_num; i++) {
      one_day_pass(list[i]);
    }
  }
  for (int i = 0; i != animal_num; i++) {
    delete list[i];
  }

  // delete list[]; <- 이번엔 안됨. 그러려면 list 자체가  Animal* list = new Animal[arr_size]; 와 같이 동적으로 되었어야 함.
}