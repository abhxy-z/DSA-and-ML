#include<iostream>
using namespace std;
 int main(){
    //Check whether a given no. is prime using while loop
    int i=2,n;
    cin>>n;

    while(i<n){
        if (n%i==0){
            cout<<n<<"is not a prime"<<endl;
            return  0;
        }
        i = i+1;
    }
    cout<<n<<"is prime"<<endl;
    return 0; 
 }