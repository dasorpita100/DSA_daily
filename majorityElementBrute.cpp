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
    int c=0;
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                c++;
            }
        }
        if(c>n/2){
            cout<<"majority element: "<<arr[i]<<endl;
            return 0;
        }
    }// return 0 stops entire program and
    // break only brings it out of the loop
    //for eg- break - leave the room
    //return 0- leave the building

    cout<<"no element found"<<endl;
}