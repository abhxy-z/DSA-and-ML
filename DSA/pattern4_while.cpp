#include<iostream>
using namespace std;
int main(){
    //Print this pattern 
// 1       2       3
// 4       5       6
// 7       8       9
    int n;
    cin>>n;
    int i=1,count=0;
    while (i<=n){
        int j=1;
         while (j<=n){
            cout<<++count<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}