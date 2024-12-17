#include <iostream>

class MyString {
  char* string_content;  // 문자열 데이터를 가리키는 포인터
  int string_length;     // 문자열 길이

  int memory_capacity;

 public:
  // capacity 만큼 미리 할당함. (explicit 키워드에 주목)
  explicit MyString(int capacity); // explicit하게 하면, 자동으로 resolve해서 이것을 쓰지 못하도록 함.

  // 문자열로 부터 생성
  MyString(const char* str);

  // 복사 생성자
  MyString(const MyString& str);

  ~MyString();

  int length() const;
  int capacity() const;
};

// .. (생략) ..

void DoSomethingWithString(MyString s) {
  // Do something...
}

int main() {
  DoSomethingWithString(3);  // ????
}