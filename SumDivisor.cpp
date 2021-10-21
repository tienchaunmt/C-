#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int n;
    cin >> n;
    int total = 0;
    for (int i = sqrt(n); i > 0; i--)
    if (n % i == 0) 
      if (n/i == i) total += i;
      else total += i + n/i;
    cout << total << endl;
  }
  return 0;
}