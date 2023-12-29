// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
// 題目12. 遞迴程式練習
#include <stdio.h>

int func(int n) {
  if(n == 0 || n == 1) {
    return n + 1;
  } else {
    return func(n - 1) + func(n / 2);
  }
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", func(a));
}