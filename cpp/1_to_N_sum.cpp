// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6957
// [C_MM40-易] 1~N之間的總和
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << '1';
    for(int i=2;i<=n;i++) {
        cout << " + " << i;
    }
    cout << " = " << (1 + n) * n / 2 << '\n';
}