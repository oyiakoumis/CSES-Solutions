#include <bits/stdc++.h>
 
#include <algorithm>
#include <string>
 
using namespace std;
 
long long xpow(long long x, int p) {
  long long res = 1;
  while (p > 0) {
    if (p & 1) res *= x;
    p = p >> 1;
    x *= x;
  }
  return res;
}
 
int main(void) {
  long long q;
  cin >> q;
 
  while (q--) {
    long long k;
    cin >> k;
 
    int digits = 1;
    for (long long p = 9;;
         digits++, k -= p, p = digits * 9 * xpow(10, digits - 1)) {
      if (k - p <= 0) break;
    }
 
    k--;
    long long x = k / digits;
    long long y = k % digits;
 
    cout << to_string(xpow(10, digits - 1) + x)[y] << endl;
  }
 
  return 0;
}