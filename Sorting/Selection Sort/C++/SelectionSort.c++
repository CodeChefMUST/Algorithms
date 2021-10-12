#include<iostream>
using namespace std;
 
int main()
{
    int i,j,n,temp,position,minimum;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        minimum=a[i];
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(minimum>a[j])
            {
                minimum=a[j];
                position=j;
            }
        }
        temp=a[i];
        a[i]=a[position];
        a[position]=temp;
    }
    cout<<"Array elements after applying Selection Sort: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*
Sample Input:

Enter the number of elements: 
7
Enter the elements of array:
12 -78 99 -23 55 36 91
*/

/*
Output for above input

Array elements after applying Selection Sort: 
-78 -23 12 36 55 91 99 
*/

/*
TIME COMPLEXITY: O(n^2)  
SPACE COMPLEXITY: O(1)
*/

