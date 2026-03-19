#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    bool f= true;
    if(n<=0){
        f= false;
    }
    while(n>1){
        if(n%2!=0){
            f= false;
            break;
        }
        n=n/2;
    }
    cout<<f<<endl;
}