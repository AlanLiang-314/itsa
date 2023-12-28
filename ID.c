// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30779
#include <stdio.h>

int codes[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

int main() {
  char id[20];
  scanf("%s", &id);
  int p = 0, x1 = codes[(id[0] - 'A')] / 10, x2 = codes[(id[0] - 'A')] % 10, i;
  for(i=1;i<9;i++) p += (id[i] - '0') * (9 - i);
  p += (id[i] - '0') + x1 + x2 * 9;
  printf("%s\n", p % 10 ? "WRONG!!!" : "CORRECT!!!");
}