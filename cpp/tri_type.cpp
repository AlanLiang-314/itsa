// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6955
// [C_MM39-易] 判斷是何種三角形
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int edge[3];
    for(int i=0; i<3; i++) {
        cin >> edge[i];
    }
    sort(edge, edge+3);
    if(edge[0] + edge[1] <= edge[2]) {
        cout << "Not Triangle\n";
    } else {
        int sqrt_sum = edge[0] * edge[0] + edge[1] * edge[1];
        if(sqrt_sum > (edge[2] * edge[2])) {
            cout << "Acute Triangle\n";
        } else if (sqrt_sum < (edge[2] * edge[2])) {
            cout << "Obtuse Triangle\n";
        } else {
            cout << "Right Triangle\n";
        }
    }
    return 0;
}
