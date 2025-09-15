#include<iostream>
#include<vector>
#include<string>

using namespace std;

class NumArray {
public:
    vector<int> arr;

    NumArray(vector<int>& nums) {
        arr = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);
    cout << obj.sumRange(0, 2) << endl;  
    cout << obj.sumRange(2, 5) << endl;
    cout << obj.sumRange(0, 5) << endl; 

    return 0;
}