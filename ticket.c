// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6885
#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  printf("NT10=%d\n", num/10);
  num %= 10;
  printf("NT5=%d\n", num/5);
  num %= 5;
  printf("NT1=%d\n", num);
}