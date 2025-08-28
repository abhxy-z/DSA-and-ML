#include<iostream>
using namespace std;
// Print this pattern
// 1
// 12
// 123
// 1234
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while (j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}