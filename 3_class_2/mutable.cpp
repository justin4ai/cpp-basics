#include <iostream>

class A {
  int data_;
  //mutable int data_; 이렇게 바꾸면 const 내에서도 mutable해짐!

 public:
  A(int data) : data_(data) {}
  void DoSomething(int x) const {
    data_ = x;  // 불가능! 왜냐하면 const 함수이기 때문에, reading을 제외한건 할 수가 없음.
  }

  void PrintData() const { std::cout << "data: " << data_ << std::endl; }
};

int main() {
  A a(10);
  a.DoSomething(3);
  a.PrintData();
}