// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
#include <stdio.h>
#include <math.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  printf("%d\n", ((m + n) * (abs(m - n) + 1) / 2));
}