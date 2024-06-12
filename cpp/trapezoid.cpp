// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
// [C_MM01-易] 計算梯型面積
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << fixed << setprecision(1) << "Trapezoid area:" << (a + b) * c / 2.0 << '\n';
}