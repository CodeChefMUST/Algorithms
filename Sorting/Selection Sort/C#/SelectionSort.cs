public class SelectionSort {
    public static void selectionSort(int[] array) 
    {
        for (int i = 0; i < array.Length - 1; i++)
        {
            int min_index = i;
            for (int j = i + 1; j < array.Length; j++)
                if (array[j] < array[min_index])
                    min_index = j;    //Initial minimum index is updated
 
            
            int temp = array[min_index]; //Then it swapped the smallest element with current index element
            array[min_index] = array[i];
            array[i] = temp;          
        }
    }

    //MAIN METHOD
    /*
    public static void Main()
    {
        int[] a = { 23, 25, 22, 21, 27 };
        selectionSort(a);

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