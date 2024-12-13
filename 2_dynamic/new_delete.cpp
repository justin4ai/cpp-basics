// array size : 5
// 1
// 4
// 2
// 6
// 8
// 0th element of list : 1
// 1th element of list : 4
// 2th element of list : 2
// 3th element of list : 6
// 4th element of list : 8

#include <iostream>

int main() {
    int arr_size;

    std::cout << "array size : " << std::endl;
    std::cin >> arr_size;

    int *list = new int[arr_size]; // array에선 & 안붙여도 됨. + pointer list 자체가 동적으로 할당!
    for (int i = 0; i < 5; i++) {
        std::cin >> list[i]; // *list[i] 안해도 됨 왜냐면 ..
	// 1.	list 포인터에서 i만큼 떨어진 위치의 주소를 계산: (list + i)
	// 2.	그 주소를 dereference하여 해당 메모리 위치의 값: *(list + i)
	// 3.	입력된 값을 이 위치에 저장
    }

    for (int i = 0; i < 5; i++) {
        std::cout << i <<  "th element of list : " << list[i] << std::endl;
    }

    delete[] list; // 그래서 한 번에 freeing할 수 있는 거임.

}