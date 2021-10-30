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

arr = [1, 3, 5, 7, 9, 11, 13, 15, 17]
#fairly uniform sorted array
n = len(arr)
key = 11
result = InterpolationSearch(arr, key, n)
if result == -1:
    print("Element is not present in the array.")
else:
    print("Element is present at index ", result)