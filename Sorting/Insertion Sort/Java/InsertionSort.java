
public class InsertionSort {
	
	public static int[] insertionSort(int[] array) {
		if (array == null || array.length == 0) //if array is not sortable, then return null
			return null;
		
		for (int i = 1; i < array.length; i++) {
			int currentElement = array[i];
			int j = i-1;
			for (;j >= 0; j--) //we move the current element to the correct position at the left of the array in this step
				if (array[j] > currentElement)
					array[j+1] = array[j];
				else 
					break;
				
			array[j+1] = currentElement; //we placed the current element in correct position
		}		
		return array;
	}
	
}
	
	/*
	 * Sample Input: [4,3,2,1]
	 * Sample Output: [1,2,3,4]
	 * 
	 * Time Complexity in Worst Case: O(n^2)
	 * Space Complexity in Worst Case: O(1)
	 * 
	 */


