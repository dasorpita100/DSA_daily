//Find the Second Maximum Element in an Array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 integers:"<<endl;        
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int maximum= arr[0];
    int sec_max= INT_MIN;
    for(int i=1;i<5;i++){
        if(arr[i]>maximum){
            sec_max= maximum;
            maximum=arr[i];
        }
        else if(arr[i]>sec_max and arr[i]<maximum){
            sec_max= arr[i];
        }
    }
    cout<<"The maximum value is: "<<maximum<<endl;
    cout<<"The second maximum value is: "<<sec_max<<endl;
    return 0;
}