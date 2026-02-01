//Maximum Sum of Subarray of Size K
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
    int k, maxsum=0;
    cout<<"Enter the value of k:"<<endl;
    cin>>k;
    for(int i=0;i<k;i++){
        maxsum+=arr[i];
    }
    int sum=maxsum;
    int j=0;
    while(k<n){
        sum=sum-arr[j]+arr[k];
        if(sum>maxsum){
            maxsum=sum;
        }
        j++;
        k++;
    }
    cout<<"the maximum sum is: "<<maxsum<<endl;
    return 0;
}