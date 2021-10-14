#include <iostream>

using namespace std;

string decToBin(long long n) {
  string s = "";
  while (n != 0) {
    if (n%2 == 0) s = '0' + s;
    else s = '1' + s;
    n /= 2;
  }
  return s;
}

int main() {
  int t;
  cin >> t;
  long long n;
  for (int i = 0; i < t; i++) {
    cin >> n;
    cout << decToBin(n) << endl;
  }
  return 0;
}