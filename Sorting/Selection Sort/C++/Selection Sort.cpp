#include<bits/stdc++.h>
using namespace std;

int Minimum_element(int[],int,int); 

int main ()  
{  
    int n;
    cin>>n;
    int a[
    int i, position, temp;
    int n = sizeof(Arr[])/sizeof(int);
    for(i=0; i<n ;i++)  
    {  
        position = Minimum_element(Arr, n, i);  
        temp = Arr[i];  
        Arr[i] = Arr[position];  
        Arr[position] = temp;  
    }  
    cout << "The sorted array is:\n";  
    for(i=0; i<n; i++)  
    {  
        cout << " " << Arr[i];  
    }  
}  
int Minimum_element(int a[], int n, int i)  
{  
    int min,position,j;  
    min = a[i];  
    position = i;  
    for(j=i+1; j<10; j++)  
    {  
        if(a[j] < min)  
        {  
            min = a[j];  
            position = j;  
        }  
    }  
    return position;  
} 
