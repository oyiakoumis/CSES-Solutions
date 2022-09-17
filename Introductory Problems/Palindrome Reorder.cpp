#include <bits/stdc++.h>
 
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
typedef long long ll;
 
string palindromer(string word) {
  unordered_map<char, long> counter;
 
  for (char c : word) {
    counter[c] += 1;
  }
 
  string head, tail;
  long n_odd_numbers = 0;
  pair<char, long> odd_char;
 
  for (auto it : counter) {
    if (it.second % 2 == 1) {
      n_odd_numbers++;
      odd_char = it;
      if (n_odd_numbers > 1) {
        return "NO SOLUTION";
      }
    } else {
      head.append(it.second / 2, it.first);
      tail.append(it.second / 2, it.first);
    }
  }
  if (n_odd_numbers == 1) tail.append(odd_char.second, odd_char.first);
  reverse(tail.begin(), tail.end());
  return head.append(tail);
}
 
int main(int argc, char *argv[]) {
  string t;
  cin >> t;
 
  cout << palindromer(t) << endl;
 
  return 0;
}
