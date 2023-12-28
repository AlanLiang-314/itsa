// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6922
#include <stdio.h>

int main() {
  int time, wage;
  double money;
  scanf("%d %d", &time, &wage);
  money = time * wage + (time - 60) * wage * 0.33 * (time > 60) + (time - 120) * wage * 0.33 * (time > 120);
  printf("%.1lf\r\n", (double)money);
}