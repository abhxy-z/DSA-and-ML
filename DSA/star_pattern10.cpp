#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    pattern(n);
}

int pattern(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<!((i+j)%2)<<"\t";
        }
        cout<<endl;
    } 
    return 0;
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}