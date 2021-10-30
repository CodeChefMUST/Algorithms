#include <bits/stdc++.h>
using namespace std;

int InterpolationSearch(int arr[], int low, int high, int key){
    int pos;
    while(low<=high){
        //pos = low + int(((key - arr[low])/(arr[high] - arr[low])))*(high - low);
        pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));
        if(arr[pos] == key){
            return pos;
        }
        if(arr[pos] < key){
            low = pos + 1;
        }
        if(arr[pos] > key){
            high = pos - 1;
        }
    }
    return -1;
}

/*
Sample Input arr = {16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47}
key = 23

output: 6

time complexity best case: O(1)
time complexity average case: O(log2(log2N))
time complexity worst case: O(N)
space complexity: O(1)

*/