## SELECTION SORT ALGORITHM  
In selection sort, the smallest value among the unsorted elements of the array is selected in every pass and inserted to its appropriate position into the array. The array with n elements is sorted by using n-1 pass of selection sort algorithm. It is one of the simplest algorithm. Selection sort is the best algorithm when swapping is a costly operation and it is a comparision based algorithm.
```
Step 1: for i = 1 to n-1
step 2: Let minimum = a[i]
step 3: Let position = i
step 4: For j = i+1 to n-1 (loop)
             if (minimun > a[j])
                Set minimum = a[j]
             Set position = j
            (end of if)
        (end of loop)
        
step 5: swapping a[position] with a[i]
        (end of loop)
step 6: END
```


