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
    bool f=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"all elements are same"<<endl;
    }  
    else{
        cout<<"elements are different"<<endl;
    }  
}       