### INSERTION SORT ALGORITHM
Insertion sort is a sorting algorithm in which the elements are transferred to the right position, one at a time. It is less efficient than Merge sort and Quick sort but is more efficient than Bubble sort and Selection sort. In selection sort, we start from second element and compare it with first element and put it in the proper position. Then the same is performed with remaining elements. Each element is compared with it's previous elements and than inserted in the proper place.  
```
Step 1: for i = 1 to n-1
Step 2: Let key = a [i]
Step 3: Let j = i – 1
Step 4: while key < a[j] and j >= 0
        set a[j+1] = a[j]
        set j = j – 1
        (End of while loop)
Step 5: set a[j+1] = key
        (End of for loop)
Step 8: Exit
  ```
