#Code For Ternary Search In Python


# Function to perform Ternary Search
def ternarySearch(l, x, key, y):
    while x >= l:
         
        # Find middle1 and middle2
        middle1 = l + (x-l) // 3
        middle2 = x - (x-l) // 3
 
        # Check if key is at any mid
        if key == y[middle1]:
            return middle1
        if key == middle2:
            return middle2
 
        # Since key is not present at mid,
        # Check in which region it is present
        # Then repeat the search operation in that region
        if key < y[middle1]:
            # key lies between l and middle1
            x = middle1 - 1
        elif key > y[middle2]:
            # key lies between middle2 and r
            l = middle2 + 1
        else:
            # key lies between middle1 and middle2
            l = middle1 + 1
            x = middle2 - 1
 
    # key not found
    return -1
 
# MAIN BODY
 
y = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]                               # Sort the list if not sorted
 
# Starting index
l = 0
 
# Length of list
x = 9
 
# Checking for 5
# Key to be searched in the list
key = 5
 
# Search the key using ternary search
a = ternarySearch(l, x, key, y)
 
# Print the result
print("Index of", key, "is", a)
 
# Checking for 50
# Key to be searched in the list
key = 50
 
# Search the key using ternary search
a = ternarySearch(l, x, key, y)
 
# Print the result
print("Index of", key, "is", a)
 

