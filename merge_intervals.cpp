#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        
        vector<vector<int>> res;

        sort(arr.begin(), arr.end());

        vector<int> curr = arr[0];

        for(int i = 1; i < arr.size(); i++){
            if(curr[1] >= arr[i][0]){
                curr[1] = max(curr[1], arr[i][1]);
            }
            else{
                res.push_back(curr);
                curr = arr[i];
            }
        }

        res.push_back(curr);

        return res;
    }
};

int main() {
    
    // 👉 Input (you can change this)
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};

    Solution obj;
    vector<vector<int>> ans = obj.merge(arr);

    // 👉 Output
    for(auto interval : ans){
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}