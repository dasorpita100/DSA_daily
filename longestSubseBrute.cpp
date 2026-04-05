#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of elements in an array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1, max_c=1;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1){
            count++;
        }
        else if(arr[i+1]-arr[i]==0) continue;
        else{
            count=1;
        }
        max_c= max(max_c, count);
    }
    cout<<"longest is : "<<max_c<<endl;
}
