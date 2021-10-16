#include <iostream>
#include <climits>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int max = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > max) max = arr[i];
  int secondMax = INT_MIN;
  for (int i = 0; i < n; i++)
    if (arr[i] < max && arr[i] > secondMax) secondMax = arr[i];
  if (secondMax == INT_MIN) cout << "NOT FOUND";
  else cout << secondMax;
  return 0;
}