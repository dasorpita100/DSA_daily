#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min= arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            min= arr[i+1];
            break;
            }
        }
    cout<<"minimum element is: "<<min<<endl;
}