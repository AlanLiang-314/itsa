// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
// [C_MM27-易] 計算兩整數間所有整數的總和
#include <stdio.h>
#include <math.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  printf("%d\n", ((m + n) * (abs(m - n) + 1) / 2));
}