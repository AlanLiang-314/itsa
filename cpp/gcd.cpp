// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
// 題目10. 輾轉相除法
#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << '\n';
}