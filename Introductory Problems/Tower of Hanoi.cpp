#include <bits/stdc++.h>
 
#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>
 
using namespace std;
 
#define ll long long
 
ll hanoi(long n, int start, int end, vector<string>& mem) {
  if (start == end) {
    return 0;
 
  } else if (n == 1) {
    mem.push_back(to_string(start) + " " + to_string(end));
 
    return 1;
  }
 
  ll a = hanoi(n - 1, start, 6 - start - end, mem);
 
  mem.push_back(to_string(start) + " " + to_string(end));
 
  ll b = hanoi(n - 1, 6 - start - end, end, mem);
 
  return a + b + 1;
}
 
int main(void) {
  int n;
  cin >> n;
 
  vector<string> mem;
  cout << hanoi(n, 1, 3, mem) << endl;
 
  for (auto s : mem) {
    cout << s << endl;
  }
 
  return 0;
}