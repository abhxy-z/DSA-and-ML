#include <iostream>
using namespace std;
// Print this pattern
// 12345
// 1234
// 123
// 12
// 1
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++)
            cout<<j;
    cout<<endl;
    }
    
}