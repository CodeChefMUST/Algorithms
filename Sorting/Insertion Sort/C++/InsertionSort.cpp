/**
 * @file InsertionSort.cpp
 *
 * @brief Implementation of Insertion Sort in C++
 *
 * @author ashishlamsal
 *
 */

#include <iostream>

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];

        // prev of currrent
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {

            // shift j to right
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}


// Sample Input:  [ 8 6 10 5 9 3 20 26 4 ]
// Sample Output: [ 3 4 5 6 8 9 10 20 26 ]

// Best Time Complexity (when array is already sorted): O(n)
// Worst Time Complexity (when array is not sorted): O(n^2)
// SPACE COMPLEXITY: O(1)
