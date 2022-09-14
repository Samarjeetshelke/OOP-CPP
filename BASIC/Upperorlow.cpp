#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter The Value:-";
    cin>>ch;

    if(ch>='a'&&ch<='z'){
        cout<<"Character is in Lower Case.";

    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"Character is uppercase";
    }
    else{
        cout<<"Character is Numeric";
    }
}