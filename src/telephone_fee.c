// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6909
#include <stdio.h>

int main() {
  int n;
  float fee;
  scanf("%d", &n);
  if(n <= 800) {
    fee = n * 0.9;
  } else if(n < 1500) {
    fee = n * 0.9 * 0.9;
  } else {
    fee = n * 0.9 * 0.79;
  }
  printf("%.1f\n", fee);
}