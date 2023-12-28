#include <stdio.h>

int main() {
    int a, b, c, is_tri;
    scanf("%d %d %d", &a, &b, &c);
    is_tri = ((a + b) > c) && ((b + c) > a) && ((a + c) > b);
    printf("%s\n", is_tri ? "fit" : "unfit");
}