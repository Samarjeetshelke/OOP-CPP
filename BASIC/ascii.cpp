#include<iostream>

using namespace std;

int main(){
    char ch;
    int no;

    cout<<"\nEnter the character: ";//enter 0 it will display the ascii from 0 to z
    cin>>ch;

    no=(int)ch;

    while(ch<='z'){
        cout<<ch<<"    "<<(int)ch<<endl;
        ch++;
    }

    return 0;
}