# Quick Sort

![Quick Sort](https://upload.wikimedia.org/wikipedia/commons/f/fe/Quicksort.gif)

Quicksort is an in-place sorting algorithm. Quicksort is a divide-and-conquer algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of memory to perform the sorting.

Mathematical analysis of quicksort shows that, on average, the algorithm takes O(nlogn) comparisons to sort n items. In the worst case, it makes O(n^2) comparisons.

## Algorithm

Quicksort applies the three-step divide-and-conquer process for sorting a typical subarray `A[p..r]`:

- **Divide**: Partition the array `A[p..r]` into two subarrays `A[p .. q - 1]` and `A[q + 1 .. r]` such that each element of `A[p .. q - 1]` is less than or equal to `A[q]`, which is, in turn, less than or equal to each element of `A[q + 1 .. r]`. Compute the index q as part of this partitioning procedure.

- **Conquer**: Sort the two subarrays `A[p .. q - 1]` and `A[q + 1 .. r]` by recursive calls to quicksort.

- **Combine**: Because the subarrays are already sorted, no work is needed to combine them: the entire array `A[p..r]` is now sorted.

## PseudoCode

    PROCEDURE QUICKSORT(A, p, r)
        if p < r
            q = PARTITION(A, p, r)
            QUICKSORT(A, p, q - 1)
            QUICKSORT(A, q + 1, r)
    END PROCEDURE


    PROCEDURE PARTITION(A, p, r)
        x = A[r]
        i = p - 1
        for j = p to r - 1
            if A[j] <= x
                i = i + 1
                exchange A[i] with A[j]
        exchange A[i + 1] with A[r]
        return i + 1
    END PROCEDURE
