// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
// [C_MM27-易] 計算兩整數間所有整數的總和
#include <iostream>

using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  cout << ((m + n) * (abs(m - n) + 1) / 2) << '\n';
}