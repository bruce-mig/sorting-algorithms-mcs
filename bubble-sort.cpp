/** Bubble Sort Algorithm
 * 
 * Time Complexity = O(n^2)
 * Space Complexity = O(1)
 */

#include <iostream>
#include <algorithm> // Include the algorithm header for std::swap
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array: ";
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

