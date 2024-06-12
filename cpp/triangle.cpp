// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858
// [C_MM02-易] 計算三角形面積
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << fixed << setprecision(1) << a * b / 2.0 << '\n';
}