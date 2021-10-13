#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//Partition function takes last element of the array as pivot,
//Places the pivot element at its correct position in sorted array
//Places all other elements to either left or right of the pivot element
//Elements smaller than pivot element is palced left of pivot and all greater elements to right of pivot.
int partition (vector<int>& arr, int l, int r)
{
	int pivot = arr[r]; // pivot
	int i = (l - 1); 

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
//arr --> Vector array to be sorted,
//l is the Starting index,
//r is the final index


vector<int> quickSort(vector<int>& arr, int l, int r)// taking vector<int> array as input, along with first and last index
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

		return arr;
	}
}


/*

# Sample Input:

Enter the number of elements:
7
Enter the elements of array:
12 78 10 53 55 26 91
 ```
Array elements after applying Quick Sort:
10 12 26 53 55 78 91
```

**TIME COMPLEXITY:** O(nlogn)
**SPACE COMPLEXITY:** O(1)

*/
