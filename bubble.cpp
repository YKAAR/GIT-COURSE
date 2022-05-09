#include <iostream>

using namespace std;

void swap(int *a, int first, int second) {
    int tmp = a[first];
    a[first] = a[second];
    a[second] = tmp;
}

int main() {

    int N;
    cout << "Choose a size for the array: ";
    cin >> N;

    int *a = new int[N];

    cout << "Insert array elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < N-1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a, i, i+1);
                swapped = true;
            }
        }
    }

    cout << "Sorted array by bubble sort: " << endl;
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < N; i++) {
        delete[] a;
    }

    cout << "\nFINE" << endl;

    return 0;
}