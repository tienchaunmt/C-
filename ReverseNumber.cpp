#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string n;
  cin >> n;
  reverse(n.begin(), n.end());
  while (n.at(0) == '0')
    n.erase(0, 1);
  if (n.at(n.length() - 1) == '-') n.pop_back();
  cout << n;
  return 0;
}