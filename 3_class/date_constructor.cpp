#include <iostream>

class Date {
  int year_;
  int month_; 
  int day_;    

 public:
  void SetDate(int year, int month, int date);
  void AddDay(int inc);
  void AddMonth(int inc);
  void AddYear(int inc);

  int GetCurrentMonthTotalDays(int year, int month);

  void ShowDate();

//   Date() = default;  // 디폴트 생성자를 정의해라



  // Constuctor + Overloading
  Date() { // we can replace default constructor with ours
    year_ = 2012;
    month_ = 7;
    day_ = 12;
  }

  Date(int year, int month, int day) { // constructor
    year_ = year;
    month_ = month;
    day_ = day;
  }

};

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
  std::cout << "Today is " << year_ << "/" << month_ << "/" << day_
            << "." << std::endl;
}
int main() {
  Date day(2011, 3, 1); // or Date day = Date(2012, 3, 1); is also possible (implicit and explicit respectively)
  day.ShowDate();

  day.AddYear(10);
  day.ShowDate();

  return 0;
}

// 절대로 인자가 없는 생성자를 호출하기 위해서 A a() 처럼 하면 안됩니다. 해당 문장은 A 를 리턴하는 함수 a 를 정의한 문장 입니다. 반드시 그냥 A a 와 같이 써야 합니다.