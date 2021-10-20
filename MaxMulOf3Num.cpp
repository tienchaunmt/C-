#include <iostream>

using namespace std;

// Nhập mảng
void InArr(int arr[], int length) { 
  for (int i = 0; i < length; i++)
    cin >> arr[i];
}

// Hoán vị
void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// Sắp xếp giảm dần
void BubbleSort(int arr[], int length) {
  for (int i = 0; i < length - 1; i++)
    for (int j = length - 1; j > i; j--)
      if (arr[j] > arr[j - 1])
        Swap(arr[j], arr[j - 1]);
}

int main() {
  int length;
  cin >> length;
  int arr[length];
  InArr(arr, length);
  BubbleSort(arr, length);
  long long max = arr[0]*arr[1]*arr[2];
  if (arr[0]*arr[length-1]*arr[length-2] > max) max = arr[0]*arr[length-1]*arr[length-2];
  cout << max;
  return 0;
}