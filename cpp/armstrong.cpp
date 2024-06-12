// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941
// [C_MM32-易] Armstrong數
#include <iostream>

using namespace std;

int isArmstrong(int num) {
  int i, nums[100], num_copy = num, sum = 0;
  for(i=0;num!=0;i++) {
    nums[i] = num % 10;
    num /= 10;
  }
  for(int j=0;j<i;j++) {
    sum += pow(nums[j], i);
  }
  return (sum == num_copy) ? 1 : 0;
}

int main() {
  int n, result;
  cin >> n;
  result = isArmstrong(n);
  cout << (result ? "Yes" : "No") << '\n';
  
}