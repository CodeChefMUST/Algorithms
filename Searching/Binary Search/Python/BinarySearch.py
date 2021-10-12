def binarySearch(arr: list, n: int, key: int) -> int:
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

arr = [2, 5, 7, 10, 20, 39, 51]
# key represents the value to be searched in arr
key = 39
n = len(arr)
# calling binarySearch function
result = binarySearch(arr, n, key)
if result == -1:
    print("The element is not present in the array.")
else:
    print("The element is present at the index: ", result)