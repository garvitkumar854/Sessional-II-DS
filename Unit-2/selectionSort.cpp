// Selection Sort
#include <iostream>
using namespace std;

int main() {
    int n, i, j, minIndex, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // assuming max 100 elements
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort Logic
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // update index of minimum element
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted elements in ascending order: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
