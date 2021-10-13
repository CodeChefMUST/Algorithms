INSERTION SORT ALGORITHM

In insertion sort algorithm, we sort the elements in ascending order just like sorting a deck of cards.
First of all, we assume the first element of the array as sorted and start with the second element. 
If the second element is smaller than the first element then we swap them. In this case, first two 
elements will be sorted. After that, we iterate this step with other elements of the array and we place 
them on the correct position on the left-side of the array one by one. In the end, we get a sorted array 
with ascending order.

Step 1: for i = 2 to array.length-1
Step 2: Let currentElement = array[i]
Step 3: for j = i-1 to 0
Step 4: if (array[j] > currentElement)
          Set array[j+1] = array[j];
        else 
			    break;
        end_for
 Step 5:Set array[j+1] = currentElement
        end_for
Step 6: return array
Step 7: END
