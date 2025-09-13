#include<iostream>
#include<vector>

using namespace std;
vector<int> twosum(vector<int>& nums,int target){
    int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {};
}

int main(){

    vector<int> nums={1,2,4,5,8};
    int target=9;
    vector<int> sum=twosum(nums,target);

    cout<<sum[0]<<sum[1];

    return 0;
}