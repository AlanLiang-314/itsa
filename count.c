// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939
#include <stdio.h>

int main() {
    int N, num;
    scanf("%d", &N);
    num = (((N / 6) + 1) * 6 * (N / 6)) / 2 - (((N / 12) + 1) * 12 * (N / 12)) / 2;
    printf("%d\n", num);
}