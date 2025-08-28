#include<iostream>
using namespace std;

int main(){
    //Check whether a given no. is prime
    int n ;
    cout<<"Enter a no. to check if prime"<<endl;
    cin>>n;
    for (int i =2; i<n; i++){
        if (n%i==0){
            cout<<n<<" is not a prime no."<<endl;
            return 0;
        }
    }
    cout<<n<<" is a prime no.";
    return 0;
}