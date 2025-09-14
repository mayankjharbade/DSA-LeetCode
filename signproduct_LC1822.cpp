#include<iostream>
#include<vector>
using namespace std;

int arraySign(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return 0;
            if(nums[i]<0) x++;
        }
        if(x%2!=0) return -1;
        else return 1;
    }

int main(){
    vector<int> nums={9,9,9,9,-1};
    cout<<arraySign(nums);
    return 0;
    
}