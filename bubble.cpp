#include <iostream>

using namespace std;

int main() {

  int N;
  cout << "Choose a size for the array: ";
  cin >> N;

  int *a = new int[N];
  int temp;

  cout << "Insert array elements:\n";
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  
  for (int i = 0; i < N-1; i++) {
    if (a[i] > a[i + 1]) {
      temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = temp;
    }
  }

  cout << "Sorted array by bubble sort: " << endl;
  for(int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}