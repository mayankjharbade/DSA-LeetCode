#include <iostream>
#include <vector>
using namespace std;


    void movezero(vector<int>& nums,int val) {

        int j = 0,temp=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                temp=nums[j];
                nums[j] = nums[i];
                nums[i]=temp;
                j++;
            }
        }
    }

int main() {
    vector<int> nums = {1, 1, 2,0,5,0,3};

    movezero(nums,0);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
