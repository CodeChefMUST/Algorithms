# This will sort array in place

def partitionArray(array, lowIndex, highIndex):
    index = lowIndex - 1
    # pivot is the last elemet
    pivot = array[highIndex]
        
    for k in range(lowIndex, highIndex):
        # Move to the left elements that are less than or equal to pivot
        if array[k] <= pivot:
            index += 1
            array[index], array[k] = array[k], array[index]
                
    # Move pivot to end of the array
    array[index + 1], array[highIndex] = array[highIndex], array[index + 1]
        
    # Return pivot position
    return index + 1
 
def quickSort(array, lowIndex, highIndex):
    if len(array) == 1:
        return array
        
    if lowIndex < highIndex:
        pivotPosition = partitionArray(array, lowIndex, highIndex)
        quickSort(array, lowIndex, pivotPosition - 1)
        quickSort(array, pivotPosition + 1, highIndex)