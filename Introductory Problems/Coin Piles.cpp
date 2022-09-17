#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
string coin_piles(long a, long b) {
  if (a > b) {
    swap(a, b);
  }
  while (b - a > 1) {
    long k = (b - a) / 2;
 
    b = b - 2 * k;
    a = a - k;
  }
 
  if (b - 1 == a) {
    a--;
    b = b - 2;
  };
  if (0 > a) return "NO";
  if (b == a && a % 3 == 0) {
    return "YES";
  } else {
    return "NO";
  }
}
 
int main(int argc, char *argv[]) {
  long t;
  cin >> t;
 
  for (long i = 0; i < t; i++) {
    long a, b;
    cin >> a >> b;
    cout << coin_piles(a, b) << endl;
  }
 
  return 0;
}