
#include <iostream>
 
using namespace std;
 

 
// function for heap sort
void heapSort(int arr[], int n)
{
    // for building heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // Extracting element from heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Moving current root to end
        swap(arr[0], arr[i]);
 
        // Call max heapify function on the reduced heap
        heapify(arr, i, 0);
    }
}
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize the largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        //  heapifying the affected sub-tree recurssively
        heapify(arr, n, largest);
    }
}



//Input: 10,15,4,7,9
//Output: 4,7,9,10,15

//Time Complexity:O(Logn)
//Space Complexity:O(1)
