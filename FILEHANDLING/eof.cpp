#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

main(){
    char s[100];
    ofstream wobj;
    ifstream robj;
    char ch;
    robj.open("file2.txt");

    while(!robj.eof()){//if its a end of file then it wil return 1 else 0
        robj.getline(s,100);
        cout<<s<<endl;
    }
    robj.close();
   
}