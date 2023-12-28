#include <stdio.h>
#include <math.h>

int main() {
  double a;
  scanf("%lf", &a);
  printf("%.1lf\n", round(a * a * 10) / 10.0);
}