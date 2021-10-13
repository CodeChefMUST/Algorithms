def merge(array: [int], beg: int, m: int, end: int):
    temp = [0]* (end - beg + 1)
    i,j,k = beg, m + 1, 0
    
    while i <= m and j <= end:
        if array[i] <= array[j]:
            temp[k] = array[i]
            k += 1
            i += 1
        else:
            temp[k] = array[j]
            k += 1
            j += 1     

    while i <= m:
        temp[k] = array[i]
        i += 1
        k += 1
 
    while j <= end:
        temp[k] = array[j]
        j += 1
        k += 1      

    for i in range(beg,end+1):
        array[i] = temp[i - beg]      

def Merge_sort(array: [int], beg: int, end: int):
    if beg < end:
        m = (beg + end)/2
        Merge_sort(array,beg,m)
        Merge_sort(array,m+1,end)
        merge(array,beg,m,end)

#Sample Input: 5 14 35 20 7 2
#Sample Output: 2 5 7 14 20 35
#Time Complexity: θ(nLogn) in all cases(worst, average and best)
#Space Complexity: O(n)  
