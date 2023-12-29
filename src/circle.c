// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749
// 題目3. 判斷座標是否在圓形的範圍內
#include <stdio.h>

int main() {
  
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%s\n", (x * x + y * y) > 10000 ? "outside" : "inside");

  return 0;
}