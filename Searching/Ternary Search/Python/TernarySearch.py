#Here, left = 0 and right = length of array - 1

def ternarySearch(ar , key , left , right):
    
    if left < right:
        
        inter = (right - left ) // 3
        rightmid = right - inter
        leftmid = left +inter
        
        if (ar[rightmid] == key): 

            print("Element found!Index:",rightmid)
            return 0;
        
        if (ar[leftmid] == key): 

            print("Element found!Index:",leftmid)
            return 0;

        elif (key > ar[rightmid]): 
            return ternarySearch(ar , key , rightmid , right)

        elif (key < ar[rightmid] and key > ar[leftmid] ) : 
            return ternarySearch( ar , key , leftmid , rightmid)

        else: 
            return ternarySearch(a , key , left , leftmid)
            
            
    print("Key not found!")
    
    return 0
