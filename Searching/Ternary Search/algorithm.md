### TERNARY SEARCH
Ternary Search is a searching algorithm which works like binary search. It is based on divide and conqure. Difference between Binary Search and Ternary Search: In Binary search, sorted array is divided into two equal parts while in Ternary Search, sorted array is divided into three equal parts.  
**Main condition for Ternary Search :** Array must be sorted.
```
int ternary_search(int a[] , int element , int left , int right)
Step 1: The array is divided into three equal parts. 
Step 2: Calculate interval, followed by left middle element and then right middle element.
Step 3: While right > left
         if right middle element = element
         exit
         if left middle element = element
         exit
Step 4: If both of these conditions are not true, we will recursively call ternary_search function by following below conditions :
         if element is less than right middle element and element is greater than left middle element
         return ternary_search (a, element, rmid, lmid)
         if element is less than left middle element
         return ternary_search (a, element, rmid, lmid)
         else ( Both of the above conditions are not true)
         return ternary_search (a, element, right, rmid)
         
         (end of while loop)
Step 5: exit
         
```
