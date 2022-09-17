#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int n;
  std::cin >> n;
 
  if (n * (n + 1) / 2 % 2 == 0) {
    std::cout << "YES" << std::endl;
    std::cout << n / 2 << std::endl;
 
    long long int x = n;
    std::cout << x << " ";
 
    long long int shift;
    for (int i = 0; i < n / 2 - 1; i++) {
      if (i % 2 == 0) {
        shift = 3;
      } else {
        shift = 1;
      }
      x -= shift;
      std::cout << x << " ";
    }
    std::cout << std::endl;
 
    std::cout << (n + n % 2) / 2 << std::endl;
    x = n - 1;
    std::cout << x << " ";
 
    for (int i = 0; i < n / 2 - (n % 2 == 0); i++) {
      if (i % 2 == 1) {
        shift = 3;
      } else {
        shift = 1;
      }
      x -= shift;
      std::cout << x << " ";
    }
  } else {
    std::cout << "NO" << std::endl;
  }
 
  return 0;
}