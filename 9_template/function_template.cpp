template <typename Cont>
void bubble_sort(Cont& cont) {
  for (int i = 0; i < cont.size(); i++) {
    for (int j = i + 1; j < cont.size(); j++) {
      if (cont[i] > cont[j]) {
        cont.swap(i, j);
      }
    }
  }
}

int main() {
    
    Vector<int> vec;
    bubble_sort(vec); // function template은 먹은 인자로 전달된 객체의 타입을 보고 알아서 인스턴스화 한 뒤에 컴파일
                      // 따라서 Cont에는 Vector<int>가 들어감
}