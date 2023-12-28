// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2921
#include <stdio.h>

int main() {
  int i;
  scanf("%d", &i);
  if(i > 31) {
    printf("Value of more than 31\n");
  } else {
    printf("%u\n", 1 << i);
  }
}