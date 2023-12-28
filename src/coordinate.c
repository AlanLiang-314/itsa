// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6951
#include <stdio.h>

char *names[7] = {"Origin", "y-axis", "x-axis", "1st Quadrant", "2nd Quadrant", "3rd Quadrant", "4th Quadrant"};

int main() {
    int x, y, type;
    scanf("%d %d", &x, &y);
    if(x == 0 && y == 0) type = 0;
    if(x == 0 && y != 0) type = 1;
    if(x != 0 && y == 0) type = 2;
    if(x > 0 && y > 0) type = 3;
    if(x < 0 && y > 0) type = 4;
    if(x < 0 && y < 0) type = 5;
    if(x > 0 && y < 0) type = 6;
    printf("%s\n", names[type]);
}