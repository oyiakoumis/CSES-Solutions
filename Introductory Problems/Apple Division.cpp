#include <bits/stdc++.h>

#include <algorithm>
#include <unordered_map>

using namespace std;

typedef long long ll;

int main(void)
{
  int n;
  cin >> n;

  long arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  long res = LONG_MAX;

  for (long num = 0; num < (1 << n); num++)
  {
    long a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
      if (num & (1 << i))
      {
        a += arr[i];
      }
      else
      {
        b += arr[i];
      }
    }
    res = min(res, abs(a - b));
  }

  cout << res;

  return 0;
}