//Given an integer array nums, find the contiguous subarray (with at least one element) 
//which has the largest sum, and return its sum.
//Input: [-2,1,-3,4,-1,2,1,-5,4]    Output: 6
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of elements in an array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum= 0, max_sum= INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max_sum){
            max_sum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"The maximum subarray output is: "<<max_sum;
}