// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6888
// [C_MM12-易] 相遇時間計算
#include <stdio.h>
#include <math.h>

int main() {
  float a;
  scanf("%f", &a);
  printf("%.0f\n", ceilf(a * 100 / (float)(100 - 30 * 2.54)));
}