// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6947
// [C_MM35-易] 平、閏年判定
#include <iostream>

using namespace std;

int main() {
    int year, is_leap_year;
    cin >> year;
    is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    cout << (is_leap_year ? "Bissextile Year" : "Common Year") << '\n';  
}