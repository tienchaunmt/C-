#include <iostream>
#include <string>

using namespace std;

int main() {
  string n;
  cin >> n;
  int len;
  if (n[0] == '-') len = n.length()-1;
  else len = n.length();
  cout << len;
  return 0;
}