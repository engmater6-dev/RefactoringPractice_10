// ❌ 냄새 5 — 전역 데이터
int g_currentTemperature = 0; // 전역 → 어디서든 변경 가능!
void setTemp(int t) { g_currentTemperature = t; }

class Temperature {
  int g_currentTemperature = 0;

public:
  int getTemp() { return g_currentTemperature; }
  void setTemp(int t) { g_currentTemperature = t; }
}
