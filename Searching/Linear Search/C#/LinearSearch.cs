class LinearSearch {
    public static int linearSearch(int[] array, int num) 
    {
        for (int i = 0; i < array.Length; i++){
            if (array[i] == num) //This loop searches the index of the given number in the array
                return i;     
        }
        return -1; //If the loop can not find the number in the array, then method will return -1
    }
}