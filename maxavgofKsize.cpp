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

    int k;
    cout << "Enter k: " << endl;
    cin >> k;

    // guard condition
    if(k > n){
        cout << "Invalid k" << endl;
        return 0;
    }

    int sum = 0;

    // first window
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }

    int maxsum = sum;   // IMPORTANT FIX

    int j = 0;
    int idx = k;        // use a separate index instead of modifying k

    while(idx < n){
        sum = sum - arr[j] + arr[idx];
        j++;
        idx++;

        if(sum > maxsum){
            maxsum = sum;
        }
    }

    double avg = (double)maxsum / k;   // IMPORTANT FIX

    cout << "maximum average is: " << avg << endl;
    return 0;
}
