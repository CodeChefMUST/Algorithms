# Bubble Sort Algorithm
**Bubble sorting** is a sorting algorithm that starts from left end of the array ,the first and second element are compared ,if the element in the right is greater than the element on the left then they are left the way they are however the element in the left is greater than the element in the right then they are swapped so that the greater element bubbles up to the end of array and the smaller element remains at the left end of the array. 
	
**For Example:**
The array that we need to sort (30, 10, 20, 15, 25, 5, 90) 

**Steps for Bubble Sorting**

.Compare the elements on the place i=0 and (i+1)=1 ,i.e 30 and 10 as the right element is larger,it will get swapped so for i=0 position we get 10 and for i+1=1 position we get 30
 now our array becomes (10, 30, 20, 15, 25, 5, 90) 
 
.Now it will compare for position i=1 and i+1=2,which in our current array is 30,20 respectively.

.Now it will keep on comparing and swapping till the (i+1)th element becomes larger than ith element.

.By this method the largest element in the array will attain the rightmost position.

.Now the resultant array is sorted in ascending order.

.Finally the sorted array is (5, 10, 15, 20, 25, 30, 90)


**NOTE**
.The algorithm checks if the element on the right, with position i + 1 is lesser than the current element at position i, then we must swap the elements if they are not in the       correct order as required, the highest number will bubble it's way to the right with each iteration, a sorted partition will form at the end of array.
