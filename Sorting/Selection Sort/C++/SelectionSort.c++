#include<iostream>

using namespace std;
 
// taking vector<int> array as input, along with it's size n
vector<int> selectionsort(vector<int> a, int n)
{
    int i, position, minimum, j, temp;
    for (i = 0 ; i < n - 1 ; i++){
        minimum = a[i];
        position = i;
        for (j= i + 1; j < n; j++) {
            if (minimum > a[j]) {
                minimum = a[j];
                position = j;
            }
        }
        temp = a[i];
        a[i] = a[position];
        a[position] = temp;
    }
    return a;        
}


/*
Sample Input:
12 -78 99 -23 55 36 91
*/

/*
Output for above input
-78 -23 12 36 55 91 99 
*/

/*
TIME COMPLEXITY: O(n^2)  
SPACE COMPLEXITY: O(1)
*/

