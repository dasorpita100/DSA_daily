#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = 0;
    for(int num : nums){
        total += num;
    }

    int left = 0;

    for(int i = 0; i < nums.size(); i++){
        if(left == total - left - nums[i]){
            return i;
        }
        left += nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int result = pivotIndex(nums);
    cout << "Pivot Index: " << result << endl;

    return 0;
}