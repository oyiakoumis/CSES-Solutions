#include <algorithm>
#include <iostream>
 
using namespace std;
 
void solve(long int a, long int b) {
  if (a >= b) {
    if (a % 2 == 0) {
      std::cout << a * (a - 1) + (a - b) + 1 << std::endl;
    } else {
      std::cout << a * (a - 1) - (a - b) + 1 << std::endl;
    }
  } else {
    if (b % 2 == 0) {
      std::cout << b * (b - 1) - (b - a) + 1 << std::endl;
    } else {
      std::cout << b * (b - 1) + (b - a) + 1 << std::endl;
    }
  }
}
 
int main(int argc, char* argv[]) {
  long int n;
  std::cin >> n;
 
  for (int i = 0; i < n; i++) {
    long int a, b;
    std::cin >> a >> b;
    solve(a, b);
  }
  return 0;
}