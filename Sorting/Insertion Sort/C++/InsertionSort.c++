#include <iostream>
using namespace std;

int insertion_sort(int a[], int n);

int insertion_sort(int a[], int n)
{
  int i, key, j;
  for (i = 1 ; i <= n-1 ; i++)
  {
    key = a[i];
    j = i - 1;
    
    while (key < a[j] && j >= 0 ) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
    
  }
  for(i = 0;i < n; i++){
        cout << a[i] <<" ";
    }
  return 0;
}

/*
Sample Input:
-78 55 90 -345 19 71 18 43
*/

/*
Output for above sample input:
-345 -78 18 19 43 55 71 90 
*/

/*
TIME COMPLEXITY:
  Best Case: O(n)
  Average Case: O(n^2)
  Worst Case: O(n^2)
  
SPACE COMPLEXITY: O(1)
*/
