#include <bits/stdc++.h>
 
#include <algorithm>
#include <string>
 
using namespace std;
 
char chess[8][8];
bool dl[15], dr[15], col[8];
int res, steps;
 
void foo(int i) {
  if (i == 8) {
    res++;
  } else {
    for (int j = 0; j < 8; j++) {
      if (i == 5 && j == 7) {
      }
      if (chess[i][j] == '.' && !dr[j - i + 7] && !dl[i + j] && !col[j]) {
        dr[j - i + 7] = true, dl[i + j] = true, col[j] = true;
        foo(i + 1);
        dr[j - i + 7] = false, dl[i + j] = false, col[j] = false;
      }
    }
  }
}
 
int main(void) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> chess[i][j];
    }
  }
 
  foo(0);
  cout << res << endl;
 
  return 0;
}