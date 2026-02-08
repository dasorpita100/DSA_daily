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
    int sum=0, curr_l=0, max_l=0, j=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while(sum>k){
            sum= sum- arr[j];
            j++;
        }
        curr_l= i-j+1;
        if(curr_l>max_l){
            max_l= curr_l;
        }
    }
    cout<<"length is: "<<max_l<<endl;
}