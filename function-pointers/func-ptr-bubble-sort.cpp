/** Fuction Pointers and callbacks - Bubble Sort Algorithm
 * 
 * Increasing or Decreasing order
 * Absolute compare
 * Time Complexity = O(n^2)
 * Space Complexity = O(1)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(int a, int b) {
    if (a > b) return 1;
    else return -1;
}

int absolute_compare(int a, int b) {
    if (abs(a) > abs(b)) return 1;
    else return -1;
}

void bubbleSort(vector<int> &arr, int (*compare)(int,int)) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (compare(arr[j], arr[j+1]) > 0) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void printVector(const vector<int> &arr) {
    for (int num : arr) {
        cout <<num<<" ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {-31, 22, -1, 50, -6, 4, -90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted array: ";
    printVector(arr);

    bubbleSort(arr, absolute_compare);
    cout << "Sorted array:   ";
    printVector(arr);
    return 0;
}

