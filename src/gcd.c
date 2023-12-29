// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
// 題目10. 輾轉相除法
#include <stdio.h>

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
}