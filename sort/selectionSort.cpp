#include <iostream>
using namespace std;

void selectionSort(int *arr, int n) {
  int temp, min;
  for (int i = 0; i < n - 1; i++) {
    min = i;
    for (int j = i + 1; j < n; j++)
      if (arr[j] < arr[min]) {
        temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
      }
  }
}

int main() {
  // init
  freopen("test.txt", "r", stdin);
  int n;

  // input data
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // sorting
  selectionSort(arr, n);

  // print sorted data
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
