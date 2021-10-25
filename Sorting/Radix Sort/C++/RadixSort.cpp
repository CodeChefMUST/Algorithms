//Radix Sort
vector<int> Radix_Sort(vector<int> &arr, int n) {
	//first of all we take  the largest element from the array
	//why do we need maximum element or largest elements ?
	//since largest element would have maximum number of digits
	//why do we find maximum number of digits
	//Radix sort is using count sort for sorting but  if numbers differ huge in range then conting sort would not be good in overall complexity right ?
	//so in radix sort we are sorting the elements of the array on the basis of digits on ones place, hundereds place ,thousands place upto the last place of digit in largest  element
	int maximum_element = *max_element(arr.begin(), arr.end());

	//finding the number of digits in largest element we've found
	//Below is one of the method to find number of digits in a number
	int number_of_digits = floor(log10(maximum_element)) + 1;  //It's a formula


	//for finding the ones place digit what we do generally ?
	//lets take a number "123", now if we want to find what digit on it's ones place we will take its mod with 10 and whatever number we will get will be ones place digit of number "123" right ?
	//To find digit on hunderds place what we can do ?
	//one thing we can do, if we divide number "123" by 10 we will get the quotient = 12 since now 2 comes at ones place then we can get the 2 by just taking mod wih 10
	//Similarly to find last digit we need largest number in power of 10 such that last digit comes to ones place
	//that's what below line does
	int largest_divisor = pow(10, number_of_digits);

	//In below code we have for loop
	//and d whose  values are 1,10,100,100,1000....
	//and each time counting sort function is being called with the value d as argument
	// when d = 1 we are calling counting sort and  count sort the elements by comparing the digits on the ones place
	//similary when d = 2 we are calling counting sort and coun sort the elements by comparing the digits on the hunders place
	for (int d = 1; d <= largest_divisor ; d *= 10)
		Counting_sort(arr, n, d); //lets see this counting sort function

        return arr; //sorted array 
}

void Counting_sort(vector<int> &arr, int n, int d) {
	//How many one digit numbers in number system ?
	//obviously 10 ?
	//what are they ?
	//0 1 2 3 4 5 6 7 8 9
	//since we are comparing and sorting based on one digit numbers
	//I have taken a vector (array) having 10 capacity and initialized each number with 0
	//below code is counting sort with little modification
	vector<int> count(10, 0);


	vector<int> helper_array(n);	//why this ?  // we need this

	//for the below explaination assume d = 1


	for (auto element : arr)
		count[(element / d) % 10]++;
	//here we are counting the number of digit that are at ones place in each element of array
	//and storing in the count array

	for (int i = 1; i < 10; i++)
		count[i] += count[i - 1]; //filling all the postions

	for (int i = n - 1; i >= 0; i--) {
		helper_array[count[(arr[i] / d) % 10] - 1] = arr[i]; //since we can't use "arr" on LHS. we've used "helper_array"
		//here we are sorting according to value of d
		//arr[i] is the elemenent and we are taking it's mod to get digit and finding its count from count array
		//-1 is used here because we are using 0 based indexing for helper_array

		count[(arr[i] / d) % 10]--;
		//after that we are decreasing the count of the (arr[i] / d) % 10) in count array
	}

	for (int i = 0; i < n; i++)
		arr[i] = helper_array[i]; //storing the elments fro helper array to original array


	//for each iteration we are doing this till we get our array sorted

}
