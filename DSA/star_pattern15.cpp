#include<iostream>
using namespace std;

int pattern(int n){
    char a = 'A';
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a;
        }
        a++;
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    pattern(n);
}