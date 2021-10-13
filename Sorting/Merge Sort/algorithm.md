## Merge Sort
### Merge Sort is a very efficient sorting algorithm. It uses Divide and Conquer principle to sort the elements. It divides the list into two equal halves. The sub-lists are divided again and again until each sublist consists of a single element.Then merge sublists in a way that results in a sorted list.
![This is an image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png)     

## Algorithm
```
Merge_sort(array,start,end)
Step 1: if start<end
Step 2:set m = (start+end)/2
Step 3: Merge_sort(array,start,m)
Step 4: Merge_sort(array,m+1,end)
Step 5: merge(array,start,m,end)
Step 6: end of if
Step 7: END of Merge_sort
Step 8:Exit
```
