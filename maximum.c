// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786
#include <stdio.h>
#include <float.h>

int main() {
  float max = FLT_MIN, min = FLT_MAX, num;
  for(int i=0;i<10;i++) {
    scanf("%f", &num);
    max = num > max ? num : max;
    min = num < min ? num : min;
  }
  printf("maximum:%.2f\nminimum:%.2f\n", max, min);
}