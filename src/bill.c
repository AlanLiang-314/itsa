// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30778
#include <stdio.h>

int main() {
  int prize_num[4][8] = {0}, num, bill_num[8], prize_cnt[7] = {0};
  for(int i=0;i<4;i++) {
    for(int j=0;j<8;j++) {
      
      scanf("%d", &prize_num[i][j]);
    }
  }
  scanf("%d", &num);
  printf("hello\n");
  while (num--)
  {
    for(int i=0;i<8;i++) scanf("%d", &bill_num[i]);
    int same_number = 0;
    for(int i=0;i<8;i++) {
      if(bill_num[i] == prize_num[0][i]) same_number++;
    }
    if(same_number == 8) prize_cnt[6]++;
    for(int j=1;j<4;j++) {
      same_number = 0;
      for(int i=0;i<8;i++) {
        if(bill_num[i] == prize_num[j][i]) {
          same_number++;
        } else {
          same_number = 0;
          break;
        }
      }
      if(same_number > 2) prize_cnt[same_number - 3]++;
    }
  }
  
  for(int i=6;i>=0;i--) {
    printf("%d ", prize_cnt[i]);
  }
}