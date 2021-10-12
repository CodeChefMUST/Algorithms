def binarySearch(arr, n, key):
    low = 0
    high = n-1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            high = mid - 1
        elif arr[mid] < key:
            low = mid + 1
    
    return -1

arr = [1, 4, 6, 10, 20, 39, 50, 66]
n = len(arr)
key = 39
# calling function binary search
result = binarySearch(arr, n, key)
if result == -1:
    print("Element is not present in the array.")
else:
    print("Element is found at index: ", result)