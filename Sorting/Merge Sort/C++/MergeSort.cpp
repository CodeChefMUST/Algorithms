#include<iostream>

using namespace std;

void merging(int lowest,int middle ,int highest, int arr[],int n)
{   
    // arr2 is temp array to store merged array
    int low2,low,mid,arr2[n];

    low=lowest;
    mid =middle+1;
    low2 =lowest;
    
    // Merging the two sub-arrays
    while(low2<=middle && mid<=highest)
    {
        if(arr[low2]<=arr[mid])
            arr2[low]=arr[low2++];
        else
            arr2[low]=arr[mid++];
        low++;
    }

    if( low2 > middle){
        for(int k=mid; k<=highest; k++)
            arr2[low++]=arr[k];
    }else{
        for(int k=low2; k<=middle; k++)
            arr2[low++]=arr[k];
    }

    cout <<"\n";

    for(int k=lowest; k<=highest; k++)
    {
        arr[k]=arr2[k];
        cout << arr[k] <<" ";
    }
}

void mergesort(int start,int end,int arr[],int n)
{
    int middle = (start+end)/2;

    // Perform the sorting process only if
    // The ending index is higher than starting index
    if(start<end)
    {

        middle= (start+end)/2;
        mergesort(start,middle,arr,n);
        mergesort(middle+1,end,arr,n);
        merging(start,middle,end,arr,n);

    }
}

void merge(int,int,int*,int);

int main()
{   
    int n;
    
    cout<<"Enter no of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    mergesort(0,n-1,arr,n);

    cout<<"Elements sorted: ";

    for(int i=0; i<n; i++){

        cout <<arr[i]<<" ";
    }

    return 0;
}

