#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  char curr = 'z';
  string input;
  long long res=0;
  long long count = 1;
 
  std::cin >> input;
 
  for (char s : input) {
    if (s == curr) {
      count += 1;
      res = max(res, count);
    } else {
      curr = s;
      res = max(res, count);
      count = 1;
    }
  }
 
  std::cout << res << std::endl;
 
  return 0;
}