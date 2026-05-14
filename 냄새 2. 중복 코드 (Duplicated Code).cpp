// ❌ Before — 동일 로직이 두 곳에 중복
class Rectangle {
  double width, height;
  double computeArea() { return width * height; }

public:
  double getArea() { return computeArea(); }
  double getScale() { return computeArea() * 2; }
  // width * height 가 중복!
};

class Triangle {
  double base, height;
  double computeArea() { return 0.5 * base * height; }

public:
  double area() { return computeArea(); }

  double info() {
    return computeArea();
  } // 중복 처리는 -> 상속으로 해결하면 될 듯...
};

// ✅ After — 함수 추출하기 (Extract Function)
// class Rectangle {
//     double width, height;
//     double computeArea() const { return width * height; } // 추출
// public:
//     double getArea()  { return computeArea(); }
//     double getScale() { return computeArea() * 2; }
// };

// ✅ 클래스 계층에서 중복 — 함수 올리기 (Pull Up Method)
// class Shape {
// protected:
//     virtual double area() const = 0;
// public:
//     void printArea() const {  // 공통 → 부모로 올리기
//         std::cout << "Area: " << area() << std::endl;
//     }
// };
// class Rect  : public Shape { double area() const override { return w*h; } };
// class Tri   : public Shape { double area() const override { return 0.5*b*h; }
// };
