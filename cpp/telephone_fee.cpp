// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6909
// [C_MM19-易] 電話費計算
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  float fee;
  cin >> n;
  scanf("%d", &n);
  if(n <= 800) {
    fee = n * 0.9;
  } else if(n < 1500) {
    fee = n * 0.9 * 0.9;
  } else {
    fee = n * 0.9 * 0.79;
  }
  cout << fixed << setprecision(1) << fee << '\n';
}