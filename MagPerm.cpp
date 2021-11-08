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
  bool check = true;
  if (k > n/2 || n%2 != 0) check = false;
  else if (k == 0) check = true;
  else
  {
    for(int i = 0; i < n; i++)
    {
      if(arr[i] == i+1)
      {
        if(i+k>n)
        {
          check = false;
          break;
        }
        swap(arr[i], arr[i+k]);
      }
    }
  }
  if(check) outArr(arr, n);
  else cout << -1;
  return 0;
}