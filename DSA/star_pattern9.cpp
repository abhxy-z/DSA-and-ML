#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int i =0; i<(2*n+1);i++){
        int count = i;
        if(i>n){
            count =2*n-i;
        }    
        for(int j =0;j<=count;j++){
            cout<<"*";
        }
        cout<<endl;
        
}
}
