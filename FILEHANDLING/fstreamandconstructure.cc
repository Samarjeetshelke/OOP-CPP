#include<iostream>
#include<fstream>

using namespace std;

main(){
    fstream obj("file2.txt",ios::app|ios::in|ios::out);
    char name[25];
    char data[30];
    int pos;

    //pos=obj.tellg();
    
    cout<<"\nEnter YOur name: ";
    cin>>name; 
    obj<<"\nName: "<<name<<endl;
    // pos=obj.eof();
    // cout<<pos;
    cout<<"\nEnter YOur Age: ";
    cin>>name;
    obj<<"Age: "<<name<<endl;
    
    cout<<"\nEnter YOur Roll No: ";
    cin>>name;
    obj<<"Roll No: "<<name<<endl;
  
    obj.seekg(0);//put the pointer to 0 so we can read from start
  
    printf("\nPrinting data from file:\n ");
    while (obj.good())//good() is same as !eof()
    {
        obj.getline(data,30);
        cout<<data<<endl;
    }
    obj.close();
    
}