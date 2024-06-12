// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15907
// 題目9. 計算正整數被3整除之數值之總和
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  N = N < 3 ? 0 : (((N / 3) + 1) * 3 * (N / 3)) / 2; 
  cout << N << '\n';
}