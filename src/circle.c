// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749

#include <stdio.h>

int main() {
  
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%s\n", (x * x + y * y) > 10000 ? "outside" : "inside");

  return 0;
}