#include <iostream>

using namespace std;

int main() {

  int N;
  cout << "Choose a size for the array: ";
  cin >> N

  int *a = new int[N];
  int temp;

  cout << "Insert array elements:\n";
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  
  for (int i = 0; i < N-1; i++) {
    if (a[i] > a[i + 1]) {
      temp = a[i];
      a[i] = b[i + 1] b[i + 1] = temp;
    }
  }

  return 0;
}