#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter number of elements: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "enter elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l=1;
    int max_l=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            l++;
        }
        else{
            l=1;
        }
        max_l= max(max_l, l);
    }
    cout<<"the length is: "<<max_l<<endl;

    }