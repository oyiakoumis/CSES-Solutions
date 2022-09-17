#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int n;
  cin >> n;
 
  if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION" << std::endl;
  } else if (n == 1) {
    cout << 1 << endl;
  } else if (n == 4) {
    cout << "2 4 1 3" << endl;
  } else {
    long long int end = n, mid = n / 2;
    while (mid > 0) {
      std::cout << end << " " << mid << " ";
      end -= 1;
      mid -= 1;
    }
    if (end > n / 2) {
      std::cout << end << std::endl;
    }
  }
 
  return 0;
}