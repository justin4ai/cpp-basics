// 맵은 셋과 거의 똑같은 자료 구조. 다만 셋의 경우 키만 보관했지만, 맵의 경우 키에 대응되는 값(value) 까지도 같이 보관

#include <iostream>
#include <map>
#include <string>

template <typename K, typename V>
void print_map(std::map<K, V>& m) {
  // 맵의 모든 원소들을 출력하기
  for (auto itr = m.begin(); itr != m.end(); ++itr) {
    std::cout << itr->first << " " << itr->second << std::endl;
  }
}

int main() {
  std::map<std::string, double> pitcher_list;

  // 참고로 2017년 7월 4일 현재 투수 방어율 순위입니다.

  // 맵의 insert 함수는 pair 객체를 인자로 받습니다.
  pitcher_list.insert(std::pair<std::string, double>("박세웅", 2.23));
  pitcher_list.insert(std::pair<std::string, double>("해커 ", 2.93));

  pitcher_list.insert(std::pair<std::string, double>("피어밴드 ", 2.95));

  // 타입을 지정하지 않아도 간단히 std::make_pair 함수로
  // std::pair 객체를 만들 수 도 있습니다.
  pitcher_list.insert(std::make_pair("차우찬", 3.04));
  pitcher_list.insert(std::make_pair("장원준 ", 3.05));
  pitcher_list.insert(std::make_pair("헥터 ", 3.09));

  // 혹은 insert 를 안쓰더라도 [] 로 바로
  // 원소를 추가할 수 있습니다.
  pitcher_list["니퍼트"] = 3.56;
  pitcher_list["박종훈"] = 3.76;
  pitcher_list["켈리"] = 3.90;

  print_map(pitcher_list);

  std::cout << "박세웅 방어율은? :: " << pitcher_list["박세웅"] << std::endl;
}