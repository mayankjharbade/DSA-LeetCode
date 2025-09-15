#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=target)  return i;
    }
    return  nums.size();
}


int main() {

    vector<int> nums1 = {1, 3, 4, 6};
    int target1 = 5;
    cout << searchInsert(nums1, target1) << endl; 

    return 0;
}
