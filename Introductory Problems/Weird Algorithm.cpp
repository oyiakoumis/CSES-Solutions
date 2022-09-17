#include <bits/stdc++.h>
using namespace std;
 
void solve() {
  long long n;
  cin >> n;
  cout << n << endl;
  while (n > 1) {
    n = (n % 2 == 0 ? n / 2 : 3 * n + 1);
    cout << n << endl;
  }
}
 
int main() {
  solve();
 
  return 0;
}