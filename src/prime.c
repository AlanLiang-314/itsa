// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752
// 題目8. 質數判別
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int a) {
  if (a <= 1) return false;
  bool flag = true;
  for (int i = 2; i <= (int)sqrt(a) + 1; i++) {
    if (a % i == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%s\n", is_prime(a) ? "YES" : "NO");
}