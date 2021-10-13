def LinearSearch(array , key):

    for i in range(0, len(array)):
      
        if (array[i] == key):
          
            print("Key present at index:",i)
            return 0;
          
    print("Key not present!");
        
        
# Sample Input 1 :
# array = [21 , 90 , -32 , 78 , 52]
# key = 78

# Output 1 :
# Key present at index: 3

# Sample Input 2 :
# array = [86 , 67 , 21 , 91 , -39 , 11]
# key = 99

# Output 2:
# Key not present!

# TIME COMPLEXITY :
# Best case : O(1)
# Average case : O(n)
# Worst case : O(n)

# SPACE COMPLEXITY : O(n)

