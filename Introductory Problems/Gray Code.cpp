#include <bits/stdc++.h>
 
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
typedef long long ll;
 
void print_number(const long i, const int n) {
  for (int k = n - 1; k > -1; k--) {
    if (i & (1 << k)) {
      cout << "1";
    } else {
      cout << "0";
    }
  }
  cout << endl;
}
 
long binaryToGray(long num) { return num ^ (num >> 1); }
 
int main(void) {
  int n;
  cin >> n;
 
  for (long num = 0; num < (1 << n); num++) {
    print_number(binaryToGray(num), n);
  }
 
  return 0;
}