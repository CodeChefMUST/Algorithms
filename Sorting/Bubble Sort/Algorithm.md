# Bubble Sort Algorithm
**Bubble sorting** is a sorting algorithm that starts from left end of the array and ends at the last element in the right. It checks first and second element and compares it,if the element in the right is greater than the element on the left then they are left the way they are however the element in the left is greater than the element in the right then they are swapped so that the greater element bubbles up to the end of array and the smaller element remains at the left end of the array. 

**Obejective:**
To sort the elements of the array in ascending order. 
	
**For Example:**
The array that we need to sort (30, 10, 20, 15, 25, 5, 90)

**Expected result:** (5, 10, 15, 20, 25, 30, 90)

**Steps for Bubble Sorting**

1) Compare the elements on the place index i=0 and (i+1)=1 ,i.e 30 and 10. As the right element is larger, it will get swapped with i=0 position; so we get 10 at i=10 and for i+1=1 position we get 30.
Now our array becomes (10, 30, 20, 15, 25, 5, 90).
 
2) Now, it will compare for position i=1 and i+1=2, which in our current array is 30,20 respectively.

3) Similarly, it will keep on comparing and swapping till the (i+1)th element becomes larger than ith element.

3) By this method the the smallest element in the array will attain leftmost position and the largest element in the array will attain the rightmost position.

4) Now the resultant array is sorted in ascending order.

5) Finally the expected sorted array is achived as: (5, 10, 15, 20, 25, 30, 90)

**Time Complexity:** 
Best case time complexity is O(n).

**NOTE**
The algorithm checks if the element on the right, with position i + 1 is lesser than the current element at position i, then it swaps the elements if they are not in the       correct order as required, the highest number will bubble it's way to the right with each iteration, a sorted partition will form at the end of array.
