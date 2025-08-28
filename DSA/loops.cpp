#include <iostream>
using namespace std;
int main(){
    int a,b,small;
    cout<<"ENter the value of a\t";
    cin>>a ;
    cout<<"ENter the value of b\t";
    cin>>b ;
    if (a>b){
        small = b;
        cout<<a <<"is greater than"<< b<<endl;
    }
    else{
        small =a;
        cout<<b<<"is greater than"<<a<<endl;
    }

    //Check if the smaller no. is negative
    if (small>0)
        cout<<small <<" is positive"<<endl;
    else if(small == 0)
        cout<< small<<"is zero"<<endl;
    else 
        cout <<small <<"is negative"<<endl;
}