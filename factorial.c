// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <stdio.h>

int main() {
  long long n, num = 1;
  scanf("%lld", &n);
  for(int i=2;i<=n;i++) num *= i;
  printf("%lld\n", num);
}