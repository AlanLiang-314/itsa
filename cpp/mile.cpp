// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
// 題目2. 英哩轉公里
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  int a;
  cin >> a;
  double result = static_cast<double>(a * 1.6);
  cout << fixed << setprecision(1) << result;
  return 0;
}