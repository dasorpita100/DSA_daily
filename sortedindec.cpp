//Check if an Array is Sorted (Non-Decreasing)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of integers:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the integers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool f= true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            f=false;
            break;
        }
    }
    cout<<f<<endl;
}