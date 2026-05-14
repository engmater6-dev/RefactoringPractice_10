// ❌ Before — 이름만 봐서는 의도를 알 수 없음
int calc(int basePrice, int y) { return basePrice + y; }

struct User {
  std::string name; // TO-DO : 테스트용으로 만든 코드인데 추후 삭제
  int ag;
};

// ✅ After — 이름만으로 의도 전달
// int calculateTotalPrice(int basePrice, int tax) {
//     return basePrice + tax;
// }

// struct User {
//     std::string name;
//     int age;
// };