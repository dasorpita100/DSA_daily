#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "enter number of elements: " << endl;
    cin >> n;

    int arr[n];
    cout << "enter elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l=0;
    int max_l=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            l=0;
        }
        else{
            l++;
        }
        if(l>max_l){
            max_l= l;
        }
    }
    cout<<"the length is: "<<max_l+1<<endl;

    }