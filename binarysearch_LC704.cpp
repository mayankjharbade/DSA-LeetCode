#include<iostream>
#include<vector>
using namespace std;
 
int search(vector<int>& nums, int target) {
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums={-1,5,6,7,3,9};
    int target=7;

    cout<<search(nums,target);
}