#include <iostream>

using namespace std;

int greatestCommonDivisor(int a, int b) {
  a = abs(a); b = abs(b);
  if (b == 0) return a;
  return greatestCommonDivisor(b, a % b);
}

int main() {
  int a, b;
  cin >> a >> b;
  if (b == 0) cout << "INVALID";
  else {
    int n = greatestCommonDivisor(a, b);
    if (b < 0) {
      a = -a; b = -b;
    }
    if (b/n == 1) cout << a/n;
    else cout << a/n << ' ' << b/n;
  }
  return 0;
}