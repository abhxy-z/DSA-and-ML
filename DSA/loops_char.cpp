#include<iostream>
using namespace std;
int main(){
    //Program to identify characters
    cout<<"Enter any character";
    int a= cin.get();
    if (a>=48 && a<=57){
        cout<<"It is a number"<<endl;
    }
    else if (a>=65 && a<=90){
        cout<<"It is an upper case"<<endl;
    }
    else if (a>=97 && a<=122){
        cout<<"It is lower case"<<endl;
    }
    else 
        cout<<"It is a symbol"<<endl;
}
