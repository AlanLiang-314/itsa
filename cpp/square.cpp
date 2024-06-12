// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
// [C_MM05-易] 計算正方形面積
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double a;
  cin >> a;
  cout << fixed << setprecision(1) << round(a * a * 10) / 10.0 << '\n';
}