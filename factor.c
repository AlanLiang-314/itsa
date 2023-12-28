// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6945
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("1");
    for(int i=2;i<=n;i++) {
        if(n%i==0) printf(" %d", i);
    }
    printf("\n");
}