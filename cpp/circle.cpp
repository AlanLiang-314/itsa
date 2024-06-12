// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749
// 題目3. 判斷座標是否在圓形的範圍內
#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  cout << ((x * x + y * y) > 10000 ? "outside" : "inside") << '\n';

  return 0;
}