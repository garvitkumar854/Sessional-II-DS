// Bubble Sort
#include <iostream>
using namespace std;

int main() {
    int n, i, j, temp;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // assuming maximum 100 elements
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort Logic
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted elements in ascending order: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
