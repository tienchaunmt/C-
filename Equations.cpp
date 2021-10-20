#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  long long a1, b1, c1, a2, b2, c2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
  long long d = a1*b2 - a2*b1;
  long long dx = c1*b2 - c2*b1;
  long long dy = a1*c2 - a2*c1;
  cout << setprecision(2) << fixed;
  if (d != 0) {
    float x = (float) dx/d, y = (float) dy/d;
    if (x == 0 ) x = abs(x);
    if (y == 0 ) y = abs(y);
    cout << x << " " << y;
  }
  else
    if (dx != 0 || dy != 0) cout << "VONGHIEM";
    else cout << "VOSONGHIEM";
  return 0;
}