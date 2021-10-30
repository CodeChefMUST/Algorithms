#Interpolation Search only works for arrays that are Uniformly sorted.

def InterpolationSearch(arr, key, n):
    low = 0
    high = n-1
    while low<= high:
        pos = low + ((key - arr[low])//(arr[high] - arr[low]))*(high - low)
        if arr[pos] == key:
            return pos
        elif arr[pos] > key:
            high = pos - 1
        else:
            low = pos + 1

    return -1

# arr = [1, 3, 5, 7, 9, 11, 13, 15, 17]
# fairly uniform sorted array
# n = len(arr)
# key = 11

# output: 5
# time complexity best case: O(1)
# time complexity average case: O(log2(log2N))
# time complexity worst case: O(N)
# space complexity: O(1) 
