#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target: "<<endl;
    cin>>target;
    int low= 0, high= n-1;
    int pos=-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            pos= mid;
            low= mid+1;
        }
        else if(arr[mid]>target){
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
    cout<<"the last occurance is: "<<pos<<endl;
}