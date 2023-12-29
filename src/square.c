// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6867
// [C_MM05-易] 計算正方形面積

#include <stdio.h>
#include <math.h>

int main() {
  double a;
  scanf("%lf", &a);
  printf("%.1lf\n", round(a * a * 10) / 10.0);
}