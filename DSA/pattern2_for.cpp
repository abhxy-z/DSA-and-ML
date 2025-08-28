#include<iostream>
using namespace std;
int main(){
   //Print this pattern
    // 1111
    // 2222
    // 3333
    // 4444
    
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0 ;
}