#include <iostream>
using namespace std;
// Print this pattern
// 1
// 12
// 123
// 1234
int main(){
    int n ;
    cin>>n;
    for(int i=1 ;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0 ;
}