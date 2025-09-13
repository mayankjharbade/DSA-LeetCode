#include <iostream>
#include <vector>
using namespace std;


    int removeelements(vector<int>& nums,int val) {

        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j; 
    }

int main() {
    vector<int> nums = {1, 1, 2,0,5,0,3};

    int k = removeelements(nums,0);
    cout << "k = " << k << endl;;

    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
