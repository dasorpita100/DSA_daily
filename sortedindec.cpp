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
        if(arr[i]>arr[i+1]|| arr[i]==arr[i+1]){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}