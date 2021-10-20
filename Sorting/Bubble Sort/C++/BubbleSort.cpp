/**
 * @file BubbleSort.cpp
 *
 * @brief Implementation of Bubble Sort in C++
 *
 * @author ashishlamsal
 *
 */

#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n) {
    bool isSorted;
    for (int i = 0; i < n - 1; i++) {

        // isSorted flag to monitor swapping
        isSorted = true;
        for (int j = 0; j < (n - 1 - i); j++) {
            if (arr[j] > arr[j + 1]) {

                // swap elements and set isSorted flag to false
                swap(arr[j], arr[j + 1]);
                isSorted = false;
            }
        }

        // returns if arr is sorted
        if (isSorted)
            return;
    }
}


// Sample Input:  [ 8 16 10 5 9 3 2 6 4 ]
// Sample Output: [ 2 3 4 5 6 8 9 10 16 ]

// Best Time Complexity (when array is already sorted): O(n)
// Worst Time Complexity (when array is not sorted): O(n^2)
// SPACE COMPLEXITY: O(1)
