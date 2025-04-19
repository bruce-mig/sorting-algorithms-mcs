/** Bubble Sort Algorithm
 *
 * Time Complexity = O(n^2)
 * Space Complexity = O(1)
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
   int n = arr.size();
   bool swapped;
   for (int i = 0; i < n - 1; i++) {
      swapped = false;
      for (int j = 0; j < n - i - 1; j++) {
         if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
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
      cout << num << " ";
   }
   cout << endl;
}

int main() {
   vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Unsorted array: ";
   printVector(arr);

   bubbleSort(arr);
   cout << "Sorted array:   ";
   printVector(arr);
   return 0;
}
