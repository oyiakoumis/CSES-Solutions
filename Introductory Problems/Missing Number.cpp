#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) {
  long long int n, input, sum = 0;
  cin >> n;
 
  for (int i = 0; i < n - 1; i++) {
    cin >> input;
    sum += input;
  }
 
  std::cout << ((n + 1) * n) / 2 - sum << std::endl;
 
  return 0;
}