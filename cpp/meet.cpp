// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6888
// [C_MM12-易] 相遇時間計算
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a;
  cin >> a;
  cout << round(a * 100 / (100 - 30 * 2.54)) << endl;
  return 0;
}