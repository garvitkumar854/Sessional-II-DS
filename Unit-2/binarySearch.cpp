/* Binary Search
- Concept: Repeatedly divides a sorted list in half to find the target.
- Use Case: Requires sorted data.
- Time Complexity: O(\log n)
- Example: Searching for 5 in [1, 3, 5, 7, 9] → check middle, then left/right half.
*/

#include <iostream>
using namespace std;

int main() {
    int n, key, i;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // assuming maximum 100 elements
    cout << "Enter " << n << " elements in sorted order: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    bool found = false;

    // Binary Search Logic
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element " << key << " found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;  // search in right half
        }
        else {
            high = mid - 1; // search in left half
        }
    }

    if (!found)
        cout << "Element not found in the list." << endl;

    return 0;
}
