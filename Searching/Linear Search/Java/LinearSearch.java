public class LinearSearch
{
	/*
		Linear search function:

		-Takes in two arguments 
			1. int array[]
			2. int target 
		
		-The function returns the index of a target element if found else returns -1
	*/
	public static int linear_search(int[] arr, int target)
	{
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] == target)
				return i;
		}
		return -1;
	}
}