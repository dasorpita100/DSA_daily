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
    int k;
    cout<<"enter k: "<<endl;
    cin>>k;
    int l=0, sum=0,j=0, maxl=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        while(sum>k){
            sum= sum - arr[j];
            j++;
        }
        l= i-j+1;
        if(l>maxl){
            maxl=l;
        }
    }
    cout<<"length is: "<<maxl<<endl;
    return 0;
}