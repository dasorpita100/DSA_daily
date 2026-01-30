#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k, count=0;
    cout<<"enter k value: "<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count++;
            cout<<arr[i]<<" ";
        }
    }
    cout<<"the count is: "<<count<<endl;
    return 0;
}