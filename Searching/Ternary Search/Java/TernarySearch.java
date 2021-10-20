public class TernarySearch {
	public static int ternarySearch(int leftIndex, int rightIndex, int number, int[] array) { // if array is not sorted, then it may return a wrong result
		if (rightIndex>=leftIndex) {
			int middleFirst = leftIndex + (rightIndex-leftIndex)/3;
			int middleSecond = rightIndex - (rightIndex-leftIndex)/3;
			if(array[middleFirst] == number)
				return middleFirst;
			if(array[middleSecond] == number)
				return middleSecond;
			if(number < array[middleFirst])
				return ternarySearch(leftIndex, middleFirst-1, number, array);
			if(number > array[middleFirst] &&  number < array[middleSecond])
				return ternarySearch(middleFirst+1, middleSecond-1, number, array);
			if(number > array[middleSecond])
				return ternarySearch(middleSecond+1, rightIndex, number, array);
		}		
		return -1;//if number is not found in the array, then it returns -1
	}
}

/*
 * Sample Input: (0,3,1,{0,1,2,3})
 * Sample Output: 1
 * 
 * Time Complexity in Best Case : O(1)
 * Time Complexity in Worst Case : O(log(3)n)
 * Space Complexity in Worst Case: O(1)
 */

