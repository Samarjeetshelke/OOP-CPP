#include<iostream>
//we can save the cpp file using.cpp or .C or .cc
//take two input display grater number

using namespace std;

int main(){
    int a,b;

    cout<<"Enter Two Number: ";
    cin>>a>>b;
    
    if(a>b){
        cout<<"\n "<<a<<" is greater then "<<b<<endl;
    }
    else{
        cout<<"\n "<<b<<" greater then  "<<a<<endl;
    }
    return 0;
}