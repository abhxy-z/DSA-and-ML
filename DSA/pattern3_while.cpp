#include<iostream>
using namespace std;
int main(){
    //Print this pattern
    // 1234
    // 1234
    // 1234
    // 1234
    int n ;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
        j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0 ;
}