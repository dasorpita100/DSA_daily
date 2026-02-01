//Remove Duplicates from a Sorted Array
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
    int j=0;//first element is always unique
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]= arr[i];
        }
    }
    cout<<"The unique elements are: "<<endl;
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"length is: "<<j+1<<endl;
    return 0;
}