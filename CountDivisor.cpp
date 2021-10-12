#include <iostream>

using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  n = abs(n);
  for (int i = n; i > 0; i--)
    if (n % i == 0) count++;
  cout << count;
  return 0;
}