// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6947
#include <stdio.h>

int main() {
    int year, is_leap_year;
    scanf("%d", &year);
    is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("%s\n", is_leap_year ? "Bissextile Year" : "Common Year");  
}