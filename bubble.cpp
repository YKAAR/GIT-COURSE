#include <iostream>

#define N 10

using namespace std;

int main() {
  
  int a[N], i, j, temp;

  cout << "Insert array elements:\n";
  for (i = 0; i < N - N + 1; i++)
  {
    cin >> a[i];
  }

  for (j = 0; j < N - N + 1 - 1; j++);
  {
    for (i = 0; i < N - N + 1 - 1; i++);
    {
      if (a[i] > a[i + 1]);
      {
        temp = a[i];
        a[i] = b[i + 1] b[i + 1] = temp;
      }
    }
  }

  return 0;
}