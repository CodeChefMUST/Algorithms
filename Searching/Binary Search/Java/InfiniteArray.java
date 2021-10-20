package com.company;

/*

Input Array - arr = {3,5,7,9,10,90,100,130,140,160,170}

Target Element - 10

Output - 4

Time Complexity - O(log N)
Space Complexity - O(log N) // Search Space is also reduced to chunks of the Infinite Array

*/

public class InfiniteArray {
    public static void main(String[] args) {
        int[] arr = {3,5,7,9,10,90,100,130,140,160,170};
        int target = 10;
        System.out.println(ans(arr,target));
    }

    /*
    1. This function will divide the infinite array into chunks / Subarrays.
    2. Will check if the target element lies in the chunk / subarray range.
    3. If yes, binary search is applied on the chunk / subarray , returns -1 if not found.
    4. Else, Chunk / Subarray range is changed.
    5. -1 is return in case element does not exist.
    */
    static int ans(int[] arr, int target)
    {
        int start = 0;
        int end = 1;
        while(target > arr[end])
        {
            int newStart = end + 1;
            end = end + 2 * (end - start + 1);
            start = newStart;
        }
        return binarySearch(arr, target, start, end);
    }
    static int binarySearch(int[] arr, int target, int start, int end)
    {
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(target < arr[mid])
            {
                end = mid - 1;
            }
            else if(target > arr[mid])
            {
                start = mid + 1;
            }
            else
                return mid;

        }
        return -1;
    }
}
