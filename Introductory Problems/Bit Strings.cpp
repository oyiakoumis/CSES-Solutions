#include <algorithm>
#include <cmath>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int C = pow(10, 9) + 7;
  long long int n;
  std::cin >> n;
 
  long long int res = 1;
 
  for (long int i = 0; i < n; ++i) {
    res *= 2;
    res = res % C;
  }
 
  std::cout << res << std::endl;
 
  return 0;
}