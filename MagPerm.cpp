#include <iostream>

#define MAX 100000

using namespace std;

void inArr(int arr[], int n)
{
  for(int i = 1; i <= n; i++)
    arr[i - 1] = i;
}

void outArr(int arr[], int n)
{
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main()
{
  int n, k, arr[MAX];
  cin >> n >> k;
  inArr(arr, n);
  outArr(arr, n);
  cout << endl;
  if (k == 0) outArr(arr, n);
  if (k > n/2 || n%(2*k) != 0) cout << -1 << endl;
  else
  {
    for (int i = 0; i < n - k; i++)
      if (arr[i] == i + 1)
        swap(arr[i], arr[i+k]);
    outArr(arr, n);
  }
  return 0;
}