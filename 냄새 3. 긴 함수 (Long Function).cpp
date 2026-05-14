// ❌ Before — 모든 로직이 한 함수에
bool isValidOrder(const Order &o) {
  return !o.items.empty() && o.customerId >= 0;
}

double calculateTotal(const Order &o) {
  double total = 0;
  for (auto &item : o.items)
    total += item.price * item.qty;
  double discount = total > 100 ? total * 0.1 : 0;
  return total - discount;
}

void paymentGatewayCharge(int customerId, double amount) {
  // 결제 처리 로직
}

void sendConfirmationEmail(int customerId, double amount) {
  // 이메일 발송 로직
}

void processOrder(Order &order) {
  // 유효성 검사
  if (!isValidOrder(order))
    return;

  // 금액 계산
  double total = calculateTotal(order);

  // 결제 처리
  paymentGatewayCharge(order.customerId, total);
  // 알림 발송

  sendConfirmationEmail(order.customerId, total);
}
