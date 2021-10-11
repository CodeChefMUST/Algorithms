def merge(array,beg,m,end):
    

    temp = [0]* (end-beg+1)
    i,j,k = beg, m+1, 0
    

    while i<=m and j<=end:
        if array[i]<=array[j]:
            temp[k] = array[i]
            k+=1
            i+=1
        else:
            temp[k] = array[i]
            k+=1
            j+=1
        k+=1

    while i <= m:
        temp[k] = array[i]
        i += 1
        k += 1
 
    while j <= end:
        temp[k] = array[j]
        j += 1
        k += 1      

    for i in range(beg,end+1):
        array[i] = temp[i-beg]      

def Merge_sort(array, beg, end):
    if beg<end:
        m = (beg+end)/2
        Merge_sort(array,beg,m)
        Merge_sort(array,m+1,end)
        merge(array,beg,m,end)

