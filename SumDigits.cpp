#include <iostream>
#include <string> 

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int total = 0;
    for (int j = 0; j < s.length(); j++) {
       int c = s[j] - 48;
       total += c;
    }
    cout << total << endl;
  }
  return 0;
}