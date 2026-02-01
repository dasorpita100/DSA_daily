//Check if an Array is a Palindrome
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
    bool f= true;
    int j=n-1;
    int i=0;
    while(i<j){
        if(arr[j]!=arr[i]){
            f= false;
            break;
        }
        j--;
        i++;
    }
    if(f){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}