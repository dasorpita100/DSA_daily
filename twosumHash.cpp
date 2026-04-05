#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n, target;
    cout<<"Enter the total number of elements in an array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target: "<<endl;
    cin>> target;
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        int needed= target- arr[i];
        if(mp.find(needed)!= mp.end()){
            cout<<"pair found at indices "<<mp[needed]<<" , "<<i<<endl;
            return 0;
        }
        mp[arr[i]]=i;
    }
    return 0;
}