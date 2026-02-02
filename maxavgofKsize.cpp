// maximum average of k sized inputs
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
    int k,sum=0;
    cout<<"enter k: "<<endl;
    cin>>k;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxsum= sum;
    int dup_k = k, j=0;
    while(dup_k<n){
        sum = sum - arr[j]+arr[dup_k];
        j++;
        dup_k++;
        if(sum>maxsum){
            maxsum= sum;
        }
    }
    double avg= (double)maxsum/k;
    cout<<"maximum average is: "<<avg<<endl;
}