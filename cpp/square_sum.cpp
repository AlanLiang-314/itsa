// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6928
// [C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) {
    cout << i << '*' << i << '=' << i*i << '\n';
  }
}