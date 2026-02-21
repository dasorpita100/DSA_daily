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
    cout<<"enter the target: "<<endl;
    cin>>target;

    int left=0, right= n-1, pos=-1;
    while(left<=right){
        int mid= left+(right-left)/2;
        if(target==arr[mid]){
            pos=mid;
            break;
        }
        //left half sorted
         if(arr[left]<=arr[mid]){
            if(target>=arr[left] && target<arr[mid]){
                right=mid-1;
            }
            else{
                left= mid+1;
            }
        }
        //right part sorted
        else{
            if(target>arr[mid] && target<=arr[right]){
                left=mid+1;
            }
            else{
                right= mid-1;
            }
        }
    }
    cout<<"the position is: "<<pos<<endl;
    return 0;
}
