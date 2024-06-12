// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6885
// [C_MM11-易] 購票計算
#include <iostream>

using namespace std;

int main() {
  int num;
  cin >> num;
  cout << "NT10=" << num / 10 << '\n';
  num %= 10;
  cout << "NT5=" << num / 5 << '\n';
  num %= 5;
  cout << "NT1=" << num << '\n';
}