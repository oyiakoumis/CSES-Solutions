#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int n;
  std::cin >> n;
  for (long long int k = 1; k <= n; k++) {
    cout << k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2) << endl;
  }
  return 0;
}