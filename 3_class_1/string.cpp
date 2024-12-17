#include <iostream>

class string {
  char *str;
  int len;

 public:
  string(char c, int n);  // 문자 c 가 n 개 있는 문자열로 정의
  string(const char *s);
  string(const string &s);
  ~string();

  void add_string(const string &s);   // str 뒤에 s 를 붙인다.
  void copy_string(const string &s);  // str 에 s 를 복사한다.
  int strlen();                       // 문자열 길이 리턴
};

string::string(char c, int n) {
    len = 0;
    str = new char[n];
    for (int i=0; i<n; i++) {
        str[i] = c;
        len ++;
    }
}

string::string(const string &s) { // copy constructor
    // 1. 원본 문자열의 길이를 복사
    len = s.len;

    // 2. 문자열 저장 공간을 동적 할당 (원본 문자열 길이 + 1 for null-terminator)
    str = new char[len + 1];

    // 3. 원본 문자열 내용을 복사
    for (int i = 0; i < len; i++) {
        str[i] = s.str[i];
    }

    // 4. Null-terminator 추가
    str[len] = '\0';
}

string::string(const char *s) {
    len = 0;
    while (s[len] != '\0') {
        len++; // 문자열 길이를 계산
    }

    str = new char[len + 1]; // 문자열과 null-terminator를 위한 메모리 할당
    for (int i = 0; i < len; i++) {
        str[i] = s[i]; // 문자열 복사 (s[i]는 *(s + i)와 동일한 표현)
    }
    str[len] = '\0'; // null-terminator 추가
}

string::~string() { // copy constructor
    delete[] str;
}

void string::add_string(const string &s) {

    char* new_str = new char[s.len + len];

    for (int i = 0; i < len ; i++) {
        new_str[i] = str[i];
    }

    for (int i = len; i < len + s.len ; i++) {
        new_str[i] = s.str[i - len];
    }
    len += s.len;
    delete[] str;
    str = new_str;
    
}

void string::copy_string(const string &s) {
    delete[] str; // 기존의 것을 삭제하지 않고 덮어쓰면 안됨

    len = s.len;
    str = new char[len + 1];
    for (int i = 0; i < len; i++) {
        str[i] = s.str[i];
    }
    str[len] = '\0';
}

int string::strlen() {
    return len;
}





int main() {

    string* str1 = new string('J', 5); 

    std::cout << "heyy" << str1->strlen() << std::endl;
    return 0;
}