#include<iostream>
#include<fstream>

using namespace std;

main(){
    char data[100];

    ofstream wobj;
    ifstream robj;

    wobj.open("file2.txt",ios::out);
    cout<<"\nEnter Your name: ";
    cin.getline(data,100);//it will read the complete line with spaces
    wobj<<data<<" ";
    wobj.close();

    robj.open("file2.txt",ios::in);
    cout<<"\ndata: ";
    robj.getline(data,100);//it will read the complete line with spaces
    cout<<data;
    robj.close();

    wobj.open("file2.txt",ios::out|ios::ate);//appends the existing file
    cout<<"\nEnter Your name: ";
    cin.getline(data,100);//it will read the complete line with spaces
    wobj<<data<<" ";
    wobj.close();

    robj.open("file2.txt",ios::in);
    cout<<"\ndata: ";
    robj.getline(data,100);//it will read the complete line with spaces
    cout<<data;
    robj.close();


}
