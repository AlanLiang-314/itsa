// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894
#include <stdio.h>

int main() {
  int time;
  scanf("%d", &time);
  printf("%d days\n", time / 86400);
  time %= 86400;
  printf("%d hours\n", time / 3600);
  time %= 3600;
  printf("%d minutes\n", time / 60);
  time %= 60;
  printf("%d seconds\n", time);
}