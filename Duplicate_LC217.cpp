#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool duplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i-1]) 
            return true; 
    }
    return false;
}
// it is main function
 
int main() {
    vector<int> nums = {1, 2, 3, 5}; 

    if (duplicate(nums)==true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}