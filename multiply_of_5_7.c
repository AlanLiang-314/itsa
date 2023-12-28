// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  for(i=1;i<((n-1)/35);i++) {
    printf("%d ", i*35);
  }
  printf("%d\n", i*35);
}