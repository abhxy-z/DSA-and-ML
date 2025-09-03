#include<iostream>
using namespace std;

int pattern(int n){
   for (int i =0,a='E';i<n;i++,a--){
    for(int j=0 ;j<=i; j++){
        cout<<char(a+j)<<"\t";
    }
    cout<<endl;
   }
}


int main(){
    int n ;
    cin>>n;
    pattern(n);
}