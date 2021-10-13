def LinearSearch(arr , key):

    for i in range(0, len(arr)):
      
        if (arr[i] == key):
          
            print("Key present at index:",i)
            return 0;
          
    print("Key not present!");
        
      
    
# Sample Input 1 :
# arr = [21 , 90 , -32 , 78 , 52]
# key = 78

# Output 1 :
# Key present at index: 3

# Sample Input 2 :
# arr= [86 , 67 , 21 , 91 , -39 , 11]
# key = 99

# Output 2:
# Key not present!

