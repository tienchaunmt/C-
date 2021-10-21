#include <iostream>

using namespace std;

// Kiểm tra tính đối xứng của chuỗi
int Symmetry(string s) {
  if (s.empty() || s.length() == 1) return 1;
  if (s[0] == s[s.length() - 1])
    return Symmetry(s.substr(1, s.length() - 2));
  return 0;
}

int main() {
  string s;
  while (getline(cin, s)) {
    if (Symmetry(s) == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}