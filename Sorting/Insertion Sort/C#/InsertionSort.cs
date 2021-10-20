public class InsertionSort {
    public static void insertionSort(int[] array) 
    {
        for (int i = 1; i < array.Length; ++i)//It starts from index 1 to compare the current element with remained left side elements of the array
        {                                     
            int current = array[i];    
            int j = i - 1;          
 
            while (j >= 0 && array[j] > current) //This loop allows the element to be compared with the elements before it
            {
                array[j + 1] = array[j];
                j-=1;
            }
            array[j + 1] = current; //After while loop, current element placed in the correct position 
        }
    }

    //MAIN METHOD
    /*
    public static void Main()
    {
        int[] a = { 23, 25, 22, 21, 27 };
        insertionSort(a);

        //After sorted
        for (int i = 0; i < a.Length; i++)
        {
            if(i != a.Length-1)
                Console.Write(a[i] + ", ");
            else
                Console.Write(a[i]);
        }
    }
    */


    /*
    Time complexity in the worst case: O(N^2)
    Space complexity: O(1)
    */
}