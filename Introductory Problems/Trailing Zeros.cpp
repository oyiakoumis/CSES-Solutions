#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int n, curr, a = 0, b = 0;
  std::cin >> n;
 
  curr = 2;
  while (n / curr > 0) {
    a += n / curr;
    curr *= 2;
  }
 
  curr = 5;
  while (n / curr > 0) {
    b += n / curr;
    curr *= 5;
  }
 
  std::cout << min(a, b) << std::endl;
 
  return 0;
}