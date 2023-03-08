#include<iostream>
#include<fstream>

using namespace std;

main(){
    fstream obj;
    obj.open("file3.txt",ios::in|ios::out);//in for read the data which is present   'in'   the file
    char ch;
    int i=0;
    char data[100];

    cout<<"\nEnter the data: ";
    cin.getline(data,100);

    while(data[i]!='\0'){
        obj.put(data[i]);//with the help of put() we can put the char (one at a time) in file
        i++;
    }

    obj.seekg(0);
    while(!obj.eof()){
        obj.get(ch);//with the help of get() we can read the char (one at a time) from file
        cout<<ch;
    }
    obj.close();
}