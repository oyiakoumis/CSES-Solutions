#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int res = 0, n, prev, curr;
  std::cin >> n >> prev;
 
  for (int i = 0; i < n - 1; i++) {
    std::cin >> curr;
    if (curr < prev) {
      res += prev - curr;
      curr = prev;
    }
    prev = curr;
  }
 
  std::cout << res << std::endl;
 
  return 0;
}