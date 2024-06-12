// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786
// 題目21. 最大值與最小值
#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
  float max = numeric_limits<float>::lowest();
  float min = numeric_limits<float>::max();
  float num;
  
  for (int i = 0; i < 10; i++) {
    cin >> num;
    max = num > max ? num : max;
    min = num < min ? num : min;
  }
  
  cout << "maximum: " << fixed << setprecision(2) << max << '\n';
  cout << "minimum: " << fixed << setprecision(2) << min << '\n';
  
  return 0;
}