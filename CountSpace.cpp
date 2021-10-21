#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    int count = 0;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == ' ' && s[j] != s[j + 1]) count++;
    }
    cout << count << endl;
  }
  return 0;
}