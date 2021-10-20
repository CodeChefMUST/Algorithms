#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>nums, int target){
     int right = (nums.size())-1;
     int left = 0;
     int middle;
     while(right >= left)
     {
         middle = left + (right - left) / 2;
         if(nums[middle] == target){
            return middle;
         }
         else if(nums[middle] > target){
            right = (middle-1);
         }
         else{
            left = (middle+1);
         }
    }
    return -1;
}

int main()
{
    unsigned int i;
    int n;
    vector<int>nums;
    cout << "Enter the amount of numbers to be evaluated: ";
    cin >> i;
    cout << "Enter the numbers to be evaluated: " << endl;
    while (nums.size() < i && cin >> n){
        nums.push_back(n);
    }
    int target;
    cout << "Enter the target you want to search\n";
    cin >> target;
    int result = binarySearch(nums,target);
    if (result == -1){
        cout << "The target is not found ! ";
    }
    else{
        cout << "The target is present at index: " << result;
    }
    return 0;
}
