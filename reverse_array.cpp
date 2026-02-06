#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp= arr[n];
    int i=0;
    int j= n-1;
    while(i<j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        j--;
        i++;
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}