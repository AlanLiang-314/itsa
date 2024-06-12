// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2921
// [C_MM09-易] 計算 i 次方的值
#include <iostream>

using namespace std;

int main() {
  int i;
  cin >> i;
  if (i > 31) {
    cout << "Value of more than 31" << '\n';
  } else {
    cout << (1U << i) << '\n';
  }
}