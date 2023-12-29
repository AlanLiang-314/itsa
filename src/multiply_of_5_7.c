// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
// [C_MM28-易] 計算1到N之間屬於5和7的倍數
#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  for(i=1;i<((n-1)/35);i++) {
    printf("%d ", i*35);
  }
  printf("%d\n", i*35);
}