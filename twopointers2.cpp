#include<iostream>
using namespace std;
int main(){
    int n, target;
    cout<<"Enter the number of integers:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the integers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target: "<<endl;
    cin>>target;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!= target){
            arr[j]=arr[i];
            j++;
        }
    }
    cout<<"new elements are: "<<endl;
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"length is: "<<j<<endl;
    return 0;
}