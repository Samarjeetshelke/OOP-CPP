#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter the A'values :";
   cin>>a;
   //a = cin.get();

    if(a>0){
        cout<<"A is positive.";
    }
    else{
        if(a<0){
            cout<<"A is negative.";
        }
        else{
            cout<<"A is Zero";
        }
    }
}