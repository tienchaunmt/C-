#include <iostream>

using namespace std;

int main() {
  long n, s = 0;
  cin >> n;
  for (int i = 1; i < n; i++)
    if (n % i == 0) s += i;
  if (n == s) cout << "YES";
  else cout << "NO";
  return 0;
}