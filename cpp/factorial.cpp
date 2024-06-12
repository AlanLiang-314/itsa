// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
// [C_MM21-易] 算階乘
#include <iostream>

using namespace std;

int main() {
  long long n, num = 1;
  cin >> n;
  for(int i = 2; i <= n; i++) {
    num *= i;
  }
  cout << num << '\n';
}