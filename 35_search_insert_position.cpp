#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        if(target>nums.at(nums.size()-1)){
            return nums.size();
        }
        else if (target<nums.at(0)){
            return 0;
        }
        else{
            for(int i =0;i<nums.size();i++){
                if (nums.at(i)==target){
                    return i;
                }
                else if (target>nums.at(i) && target<nums.at(i+1)){
                    return i+1;
                }
            }

        }
        return -1;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,7};
    int target = 6;
    int a = searchInsert(nums,target);
    cout<<a<<endl;
    
    return 0;
}