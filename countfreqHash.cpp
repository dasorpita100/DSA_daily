#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of elements in an array"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++; // counting frequency of each element in array in key value pairs
    }
    vector<vector<int>> res;
    for(auto it: mp){
        res.push_back({it.first , it.second});
    }
    //for printing result
    for(auto vec : res){
        cout << vec[0] << " -> " << vec[1] << endl;
    }
}

