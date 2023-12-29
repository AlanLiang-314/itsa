// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
// 題目6. 季節判定
#include <stdio.h>

int main() {
  
  int season;
  scanf("%d", &season);
  switch (season)
  {
  case 3:
  case 4:
  case 5:
    printf("Spring\n");
    break;
  case 6:
  case 7:
  case 8:
    printf("Summer\n");
    break;
  case 9:
  case 10:
  case 11:
    printf("Autumn\n");
    break;
  case 12:
  case 1:
  case 2:
    printf("Winter\n");
    break;
  
  default:
    break;
  }

  return 0;
}