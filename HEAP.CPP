#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Heapify a subtree rooted at index i
void heapify(vector<int>& marks, int n, int i) {
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // Left child
    int right = 2 * i + 2;  // Right child

    // If left child is larger than root
    if (left < n && marks[left] > marks[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && marks[right] > marks[largest])
        largest = right;

    // If largest is not the root
    if (largest != i) {
        swap(marks[i], marks[largest]);

        // Recursively heapify the affected sub-tree
        heapify(marks, n, largest);
    }
}

// Build a max heap
void buildMaxHeap(vector<int>& marks) {
    int n = marks.size();

    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(marks, n, i);
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<int> marks(n);

    cout << "Enter the marks obtained by students: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Find minimum and maximum marks
    int minMark = marks[0];
    int maxMark = marks[0];

    // Find minimum and maximum marks
    for (int i = 1; i < n; i++) {
        minMark = min(minMark, marks[i]);
        maxMark = max(maxMark, marks[i]);
    }

    cout << "Minimum mark: " << minMark << endl;
    cout << "Maximum mark: " << maxMark << endl;

    // Sort marks in descending order using heapsort
    buildMaxHeap(marks);

    for (int i = n - 1; i > 0; i--) {
        swap(marks[0], marks[i]);
        heapify(marks, i, 0);
    }

    cout << "Sorted marks (descending order): ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}
