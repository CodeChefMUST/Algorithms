#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//This function takes last element as pivot, places
//the pivot element at its correct position in sorted
//array, and places all elements smaller than pivot
//to left of pivot and all greater elements to right of pivot.
int partition (int arr[], int l, int r)
{
	int pivot = arr[r]; // pivot
	int i = (l - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = l; j <= r - 1; j++)
	{
		
		if (arr[j] < pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return (i + 1);
}

//The main function that implements QuickSort
//arr[] --> Array to be sorted,
//l --> Starting index,
//r --> Ending index 
void quickSort(int arr[], int l, int r)
{
	if (l < r)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, l, r);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, l, pi - 1);
		quickSort(arr, pi + 1, r);
	}
}




int main()
{
	int arr[] = {1,8,10,89,452,4,5,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	
	cout << "Sorted array: \n";

	//Printing the sorted array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}


