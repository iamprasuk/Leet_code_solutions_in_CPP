// leet code solution 
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> nums2;
    int i=0,j=n;
    while(i<n){
        nums2.push_back(nums.at(i));
        nums2.push_back(nums.at(j));
        i++;
        j++;
    }
    return nums2;
}


