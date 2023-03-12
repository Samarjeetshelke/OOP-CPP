#include<iostream>

using namespace std;

void adddisplay(int data){
    data=data+1;
    cout<<"\nChanged data: "<<data<<endl;
}

void adddisplayx(int &a){
    a=a+1;
    cout<<"\nChanged data: "<<a<<endl;
}
main(){
    int n=100;
    adddisplay(n);
    cout<<n<<endl;

    /*int &p;
     p = a; It is incorrect as we should declare and initialize references at single step*/
     
    int &nx=n;//refrence is like pointer but pointer needs to be dereffernced by * befour it get accessed ,but refrence varible dont need that
    adddisplayx(nx);
    cout<<nx;
}