int linear_search(vector<int> nums, int target){
	int n = nums.size();
	for (int i = 0; i < n; i++) {
		if (nums[i] == target)
			return i;
	}
	return -1;
}

int main(){
	
}