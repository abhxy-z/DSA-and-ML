#include<iostream>
using namespace std;

int pattern (int n){
    for(int i=0;i<n;i++){
        int count = 1;
    for(int j=0;j<=i;j++){
        cout<<count;
        count++;
    }
    for(int j=2*(n-i);j>2;j--){
        cout<<"-";
    }
    for(int j=0;j<=i;j++){
        count--;
        cout<<count;
        
    }
    cout<<endl;
    }  
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}