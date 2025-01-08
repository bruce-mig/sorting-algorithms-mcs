/** Selection Sort
 * 
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // update the index of minimum element
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {2, 7, 4, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}