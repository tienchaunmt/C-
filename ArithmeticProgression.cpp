#include <iostream>

using namespace std;

int main() {
  int n, s = 0;
  cin >> n;
  if (n%2 == 0) s = (3*n+2)/2;
  else s = -(3*n+1)/2;
  cout << s;
  return 0;
}