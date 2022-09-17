#include <bits/stdc++.h>
 
#include <algorithm>
#include <iterator>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <vector>
 
using namespace std;
 
typedef long long ll;
 
int main(void) {
  string s;
  cin >> s;
 
  set<string> res;
 
  vector<int> v(s.size());
  iota(v.begin(), v.end(), 0);
 
  do {
    string candidate;
    for (const auto &i : v) {
      candidate += s[i];
    }
    res.insert(candidate);
  } while (next_permutation(v.begin(), v.end()));
 
  cout << res.size() << endl;
 
  for (const auto &c : res) {
    cout << c << endl;
  }
 
  return 0;
}