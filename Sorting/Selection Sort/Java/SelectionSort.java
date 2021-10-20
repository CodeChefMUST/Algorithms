public class SelectionSort {	
	public static int[] selectionSort(int[] array) {
		if (array == null || array.length == 0) //if array is not sortable, then return null
			return null;		
		for (int i = 0; i < array.length-1; i++) {
			int minIndex = i;
			for (int j = i + 1; j < array.length;j++) //we find the index of smallest element at the rest of the array in this for loop
				if (array[j] < array[minIndex])
					minIndex = j;
			int temp = array[i]; //we swap the smallest element with current index element
			array[i] = array[minIndex];
			array[minIndex] = temp;
		}		
		return array;
	}
}
	
	/*
	 * Sample Input: [4,3,2,1]
	 * Sample Output: [1,2,3,4]
	 * 
	 * Time Complexity in Best Case: O(n^2)
	 * Time Complexity in Average Case: O(n^2)
	 * Time Complexity in Worst Case: O(n^2)
	 * Space Complexity in Worst Case: O(1) 
	 */