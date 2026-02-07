#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prefix[n];
    prefix[0]= arr[0];
    for(int i=1;i<n;i++){
        prefix[i]= prefix[i-1]+arr[i];
    }
    int l,r;
    cout<<"Enter l: "<<endl;
    cin>>l;
    cout<<"Enter r: "<<endl;
    cin>>r;
    int res;
    if(l==0){
        res= prefix[r];
    }
    else{
        res= prefix[r]- prefix[l-1];
    }
    cout<<"prefix sum of "<<l<<" and "<<r<<" is: "<<res<<endl;
}
