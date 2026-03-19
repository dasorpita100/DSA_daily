//Given an array nums of integers, return how many of them contain an even number of digits.
//Input: nums = [12,345,2,6,7896] Output: 2
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
    int count=0, even=0;
    for(int i=0;i<n;i++){
            count=0;
            while(arr[i]!=0){
                count++;
                arr[i]= arr[i]/10;
            }
            if(count%2==0){
                even++;
            }
        }
    cout<<"the no. of even digits: "<<even<<endl;
}