/* Linear Search
- Concept: Scans each element in the list sequentially until the target is found or the list ends.
- Use Case: Works on unsorted data.
- Time Complexity: O(n)
- Example: Searching for 5 in [2, 4, 5, 7] → check each element one by one.
*/

#include <iostream>
using namespace std;
int main(){
    int n, key, i;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // assuming maximum 100 elements
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    // Linear search logic
    for (i = 0; i < n; i++){
        if (arr[i] == key){
            cout << "Element " << key << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found in the list." << endl;

    return 0;
}