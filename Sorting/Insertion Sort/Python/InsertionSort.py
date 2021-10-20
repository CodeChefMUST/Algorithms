def insertionSort(array):
    if array == None or len(array) == 0:
        return None
    for i in range(1,len(array)):
        currentElement = array[i]
        j = i - 1
        while j >= 0:
            if array[j] > currentElement:
                array[j+1] = array[j]
            else:
                break
            j-=1
        array[j+1] = currentElement
    return array
#
# Sample Input: [4,3,2,1]
# Sample Output: [1,2,3,4]
#
# Time Complexity in Best Case: O(n)
# Time Complexity in Average Case: O(n^2)
# Time Complexity in Worst Case: O(n^2)
# Space Complexity in Worst Case: O(1)
#