#include<iostream>
using namespace std;

// right = number of elements of array - 1
// left  = 0

int ternary_search (int a[], int element, int right, int left);

int ternary_search (int a[], int element, int right, int left)
{
  if (right > left)
    {
      int rmid , lmid , interval;
      interval = (right - left) / 3;
      lmid = left + interval;
      rmid = right - interval;
      if (a[rmid] == element)
	{
	  cout << "Element found at index value: " << rmid;
	  exit(0);
	}
  if (a[lmid] == element)
	{
	  cout << "Element found at index value: " << lmid;
	  exit(0);
	}
  else if (element < a[rmid] && element > a[lmid])
	{
	  return ternary_search (a, element, rmid, lmid);
	}
  else if (element < a[lmid])
	{
	  return ternary_search (a, element, lmid, left);
	} 
  else
	{
	  return ternary_search (a, element, right, rmid);
	}
}
    printf("Element not found!");
    return 0;
}

/* 
Sample Input 1 :

a= [-99 , 21 , 33 , 46]
element = 89

Output : Element not found!

Sample Input 2 :

a= [-99 , 21 , 33 , 46]
element = 33

Output : Element found at index value: 2
*/

/*
TIME COMPLEXITY : O(log N)    {base 3}

SPACE COMPLEXITY : O(1)
*/






