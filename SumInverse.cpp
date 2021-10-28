#include <iostream>
#include <iomanip>

#define N 100000

using namespace std;

int main() {
  int T, n;
  cin >> T;
  double s[N];
  s[1] = 1.0;
  for (int i = 2; i <= N; i++) {
    s[i] = 1.0/i + s[i-1];
  }
  for (int i = 0; i < T; i++) {
    cin >> n;
    cout << setprecision(5) << fixed << s[n] << endl;
  }
  return 0;
}