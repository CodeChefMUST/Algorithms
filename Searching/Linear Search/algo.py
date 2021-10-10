#datatype of arr is list
def linear_search(arr, element):
    for i in range(0,len(arr)):
        if(arr[i]==element):
            #(i+1) to return the position
            return i+1           
    return -1
if __name__ == "__main__": 
