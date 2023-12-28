// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6888
#include <stdio.h>
#include <math.h>

int main() {
  float a;
  scanf("%f", &a);
  printf("%.0f\n", ceilf(a * 100 / (float)(100 - 30 * 2.54)));
}