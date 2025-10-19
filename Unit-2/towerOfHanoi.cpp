// Tower of Hanoi
#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char src, char helper, char dest) {
    if (n == 1) {
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }

    // Move n-1 disks from src to helper
    towerOfHanoi(n - 1, src, dest, helper);

    // Move remaining disk from src to dest
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;

    // Move n-1 disks from helper to dest
    towerOfHanoi(n - 1, helper, src, dest);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "Sequence of moves:\n";
    towerOfHanoi(n, 'A', 'B', 'C'); // A = Source, B = Helper, C = Destination

    return 0;
}
