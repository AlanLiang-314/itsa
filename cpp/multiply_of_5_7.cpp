// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
// [C_MM28-易] 計算1到N之間屬於5和7的倍數
#include <iostream>

using namespace std;

int main() {
  int n, i;
  cin >> n;
  for(i=1;i<((n-1)/35);i++) {
    cout << i*35 << ' ';
  }
  cout << i*35 << '\n';
}