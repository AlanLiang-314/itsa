// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2921
// [C_MM09-易] 計算 i 次方的值
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