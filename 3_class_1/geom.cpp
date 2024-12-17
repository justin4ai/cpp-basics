#include <iostream>
#include <cmath>

class Point {
    public:
        int x, y;
        // Point(int pos_x, int pos_y) {
        //     x = pos_x;
        //     y = pos_y;
        // }
        Point(int pos_x, int pos_y) : x(pos_x), y(pos_y) {} // 더 빠름
};

class Geometry {
    public:
        Geometry() {
            num_points = 0;
        }

        // Geometry() : num_points(0) {} 이것도 이러케 쓰면 더 빠름 

    void AddPoint(const Point &point) { // reference 타입
    // 	•	**참조자(reference)**는 객체를 복사하지 않고 참조만 하기 때문에 성능상 이점이 있습니다.
    // 	•	**const**를 추가하면, 함수 내부에서 point를 변경하지 않는다는 약속을 의미합니다.
    // 이것은 임시 객체를 포함한 모든 객체를 안전하게 참조할 수 있도록 보장합니다.

    //     왜 임시 객체를 참조할 수 있을까?

    // C++에서는 **const &**를 사용하면 임시 객체도 안전하게 참조할 수 있습니다.
    // 이는 컴파일러가 임시 객체의 생명 주기를 연장하기 때문입니다.

    // 임시 객체 생명 주기 연장:
    // 	•	일반적으로 임시 객체는 한 문장이 끝나면 소멸합니다.
    // 	•	그러나 **const &**로 참조하면, 해당 참조가 유효한 동안 임시 객체의 생명 주기를 자동으로 연장합니다.
        if (num_points < 100) {
            point_array[num_points++] = new Point(point.x, point.y); // 메모리 주소를 담고 있는 배열임!! 나중에 dereference해줘야함
        } else {
            std::cout << "Point array is full!" << std::endl;
        }    

    }

    // 모든 점들 간의 거리를 출력하는 함수 입니다.
    void PrintDistance();

    // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
    // 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
    // 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
    // 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
    void PrintNumMeets();
        

    private:
        // 점 100 개를 보관하는 배열.
        Point* point_array[100]; // 2_dynamic/mypet.cpp 참고. 큰 틀은 정적 배열임
        int num_points;

        double Distance(const Point& p1, const Point& p2) ; // *point_array[i]같이 memory의 dereference를 통해 이제 객체가 왔으니, 그걸 reference로 받아줌
        bool LinesIntersect(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
};

void Geometry::PrintDistance() {
    for (int i = 0; i < num_points; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "Distance: " << Geometry::Distance(*point_array[i], *point_array[j]) << std::endl;
        }
    }
}

void Geometry::PrintNumMeets() {
    int intersection_count = 0;

    // 모든 직선 조합 계산
    for (int i = 0; i < num_points; i++) {
      for (int j = i + 1; j < num_points; j++) {

        for (int k = 0; k < num_points; k++) {
          for (int l = k + 1; l < num_points; l++) {

            if (i != k && i != l && j != k && j != l) {
              // 직선 (i, j)와 (k, l)의 교점 검사
              if (LinesIntersect(*point_array[i], *point_array[j],
                                 *point_array[k], *point_array[l])) {
                intersection_count++;
              }
            }
          }
        }
      }
    }
    std::cout << "Number of intersections: " << intersection_count
              << std::endl;
}

double Geometry::Distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

bool Geometry::LinesIntersect(const Point& p1, const Point& p2,
                    const Point& p3, const Point& p4) {

    double a1 = p2.y - p1.y;
    double b1 = p1.x - p2.x;
    double c1 = a1 * p1.x + b1 * p1.y;

    double a2 = p4.y - p3.y;
    double b2 = p3.x - p4.x;
    double c2 = a2 * p3.x + b2 * p3.y;

    double f1_p3 = a1 * p3.x + b1 * p3.y - c1;
    double f1_p4 = a1 * p4.x + b1 * p4.y - c1;
    double f2_p1 = a2 * p1.x + b2 * p1.y - c2;
    double f2_p2 = a2 * p2.x + b2 * p2.y - c2;

    return (f1_p3 * f1_p4 < 0 && f2_p1 * f2_p2 < 0);
}


int main() {
    Geometry geometry;
    
    geometry.AddPoint(Point(0, 0));
    geometry.AddPoint(Point(1, 1));
    geometry.AddPoint(Point(2, 3));
    geometry.AddPoint(Point(3, 4));

    geometry.PrintDistance();
    geometry.PrintNumMeets();

    return 0;
}