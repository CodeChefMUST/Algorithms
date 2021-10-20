/**
 * @file MergeSort.cpp
 *
 * @brief Implementation of Merge Sort in C++
 *
 * @author ashishlamsal
 *
 */

#include <iostream>

void merge(int left[], int right[], int result[], int l1, int l2) {
    int i = 0, j = 0, k = 0;

    while (i < l1 && j < l2) {
        if (left[i] <= right[j])
            result[k++] = left[i++];
        else
            result[k++] = right[j++];
    }

    while (i < l1)
        result[k++] = left[i++];

    while (j < l2)
        result[k++] = right[j++];
}

void merge_sort(int arr[], int n) {
    if (n < 2) return;

    // divide
    int middle = n / 2;
    int* left = new int[middle];
    for (int i = 0; i < middle; i++)
        left[i] = arr[i];

    int* right = new int[n - middle];
    for (int i = middle; i < n; i++)
        right[i - middle] = arr[i];

    // sort
    merge_sort(left, middle);
    merge_sort(right, n - middle);

    // conquer
    merge(left, right, arr, middle, n - middle);

    delete[] left;
    delete[] right;
}

// Sample Input:  [ 8 6 10 5 9 3 2 6 4 ]
// Sample Output: [ 2 3 4 5 6 6 8 9 10 ]

// TIME COMPLEXITY: O(nlog(n))
// SPACE COMPLEXITY: O(n)