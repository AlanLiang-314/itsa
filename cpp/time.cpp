// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
// [C_MM14-易] 計算時間的組合
#include <iostream>

using namespace std;

int main() {
  int time;
  cin >> time;
  cout << time /86400 << " days\n";
  time %= 86400;
  cout << time /3600 << " hours\n";
  time %= 3600;
  cout << time /60 << " minutes\n";
  time %= 60;
  cout << time << " seconds\n";
}