#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    vector <int> nums2;
    for(int i=0; i<nums.size();i++){
        if(nums.at(i)!=val){
            nums2.push_back(nums.at(i));
        }
    }
    nums.clear();
    for(int i=0;i<nums2.size();i++){
        nums.push_back(nums2.at(i));
    }
    int count = nums.size();
    return count;
}

int main()
{
    vector<int> array = {1,2,3,3,4,5}; 
    int val = 3;
    int n = removeElement(array,val);
    for (int i =0; i<array.size();i++){
        cout<<array.at(i)<<" ";
    }
    cout<<endl;
    return 0; 
}