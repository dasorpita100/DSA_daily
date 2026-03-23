#include<iostream>
#include<vector>
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
    int el= 0, c=0;
    for(int i=0;i<n;i++){
        if(c==0){
            el= arr[i];
        }
        if(el==arr[i]){
            c++;//same element support
        }
        else{
            c--;//diff element cancel
        }
    }
    //if majority element missing
    int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==el){
                count++;
            }
        }
        if(count>n/2){
            cout<<"majority element: "<<el<<endl;
            return 0;
        }
        cout<<-1<<endl; 
}