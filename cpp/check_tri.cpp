// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6953
// [C_MM38-易] 判斷3整數是否能構成三角形之三邊長
#include <iostream>

using namespace std;

int main() {
    int a, b, c, is_tri;
    cin >> a >> b >> c;
    is_tri = ((a + b) > c) && ((b + c) > a) && ((a + c) > b);
    cout << (is_tri ? "fit" : "unfit") << '\n';
}