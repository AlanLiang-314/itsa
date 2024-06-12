// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6939
// [C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
#include <iostream>

using namespace std;

int main() {
    int N, num;
    cin >> N;
    num = (((N / 6) + 1) * 6 * (N / 6)) / 2 - (((N / 12) + 1) * 12 * (N / 12)) / 2;
    cout << num << '\n';
}