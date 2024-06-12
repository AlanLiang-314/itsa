// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6945
// [C_MM34-易] 因數問題
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << '1';
    for(int i=2;i<=n;i++) {
        if(n%i==0) cout << ' ' << i;
    }
    cout << '\n';
}