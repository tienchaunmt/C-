#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, s = 0;
  cin >> n;
  for (int i = 1; i <= 3*n + 1; i++)
    s += (pow(-1, i + 1))*i;
  cout << s;
  return 0;
}