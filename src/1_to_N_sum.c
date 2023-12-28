// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6957
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("1");
    for(int i=2;i<=n;i++) {
        printf(" + %d", i);
    }
    printf(" = %d\n", (1 + n) * n / 2);
}