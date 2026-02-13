#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum is: "<<sum<<endl;
}