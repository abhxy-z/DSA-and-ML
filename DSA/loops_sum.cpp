#include <iostream>
using namespace std;
int main(){
    //Find sum of all even elements from 1 TO n
    int n ,sum=0;
    cin>>n;
    for (int i =0; i<=n; i=i+2){
        sum = sum+i;
    }
    cout<<sum;
}