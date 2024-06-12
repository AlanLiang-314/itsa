// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6935
// [C_MM29-易] 最大質數問題
#include <iostream>

using namespace std;

bool is_prime(int a) {
  if (a <= 1) return false;
  bool flag = true;
  for (int i = 2; i <= static_cast<int>(sqrt(a)) + 1; i++) {
    if (a % i == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}

int main() {
  int n;
  cin >> n;
  n -= 1;
  while (!is_prime(n)) n--;
  cout << n << '\n';
}
