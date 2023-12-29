// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
// [C_MM01-易] 計算梯型面積
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("Trapezoid area:%.1f\n", (a + b) * c / 2.0);
}