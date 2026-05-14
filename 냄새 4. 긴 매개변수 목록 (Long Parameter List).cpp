// ❌ Before — 매개변수 4개 이상은 위험 신호

struct Address {
  std::string customerName;
  std::string address;
  std::string city;
  std::string zipCode;
};

struct OrderInfo {
  Address shippingAddress;
  double price;
  int quantity;
  std::string paymentMethod;
};

void createOrder(OrderInfo info) { ... }

// 매겨변수 -> 객체로.... 주소와 Order 정보로...
