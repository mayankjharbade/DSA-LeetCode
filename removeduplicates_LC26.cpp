#include <iostream>
#include <vector>
using namespace std;


    int removeDuplicates(vector<int>& nums) {

        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[j] != nums[i]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1; 
    }

int main() {
    vector<int> nums = {1, 1, 2};
    

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;;

    return 0;
}
