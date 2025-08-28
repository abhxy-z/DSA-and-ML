#include<iostream>
using namespace std;
// Print this pattern
// 1
// 22
// 333
// 4444
// 55555
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while (j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}