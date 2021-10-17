#include <iostream>
#include <cmath>

using namespace std;

// Nhập mảng
void InArr(int arr[], int length) { 
  for (int i = 0; i < length; i++)
    cin >> arr[i];
}

// Xuất mảng
void OutArr(int arr[], int length) {
  for (int i = 0; i < length; i++)
    cout << arr[i] << " ";
}

// Hoán vị
void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// Sắp xếp tăng dần
void InterchangeSort(int arr[], int length) {
  for (int i = 0; i < length - 1; i++)
    for (int j = i + 1; j < length; j++)
      if (arr[i] > arr[j])
        Swap(arr[i], arr[j]);
}

// Số nguyên tố
bool Prime(long long n) {
  if (n < 2) return false;
  if (n == 2 || n == 3) return true;
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) {
      return false;
      break;
    }
  return true;
}

int main() {
  int length;
  cin >> length;
  int arr[length];
  InArr(arr, length);
  InterchangeSort(arr, length);
  for (int i = 0; i < length; i++)
     if (Prime(arr[i]))
      if (arr[i] != arr[i + 1])
        cout << arr[i] << " ";
  return 0;
}