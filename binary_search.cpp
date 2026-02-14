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
    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;
    int low=0, high=n-1, pos=-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            pos= mid;
            break;
        }
        else if(arr[mid]<target){
            low= mid+1; 
        }
        else{
            high= mid-1;
        }
    }
    if(pos==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"the position is "<<pos<<endl;
    }
}
