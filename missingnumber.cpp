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
    int total_sum= n*(n+1)/2; 
    int cal_sum=0;
    for(int i=0;i<n;i++){
        cal_sum+=arr[i];
    }
    int missing= total_sum- cal_sum;
    cout<<"the missing number is: "<<missing<<endl;
}