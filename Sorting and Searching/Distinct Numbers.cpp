#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;

void solve() {
  unsigned long n;
  cin >> n;

  long* arr = new long[n];
  for (long i = 0; i < n; i++) {
    cin >> arr[i];
  }

  unordered_set<long> mem(arr, arr + n);

  cout << mem.size();

  delete[] arr;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  solve();

  return 0;
}