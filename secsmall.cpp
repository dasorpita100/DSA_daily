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
    int small= arr[0];
    int sec_small= INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            sec_small=small;
            small= arr[i];
        }
        else if(arr[i]>small && arr[i]<sec_small){
            sec_small= arr[i];
        }
        
    }
    if(sec_small==INT_MAX){
        cout<<"No second smallest element"<<endl;
        return 0;
    }
    cout<<"sec smallest: "<<sec_small<<endl;
    return 0;
}