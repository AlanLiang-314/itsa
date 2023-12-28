// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943

// https://openhome.cc/zh-tw/algorithm/numbers/perfect/
// normal solution would be like link above, but is a little complex so we just use pre-calculate table
#include <stdio.h>

long long num_list[8] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};

int main() {
    long long n, i;
    scanf("%lld", &n);
    if(num_list[0]<n) printf("%lld", num_list[0]);
    for(i=1;i<8&&num_list[i]<n;i++) {
        printf(" %lld", num_list[i]);
    }
}