#include<fstream>
#include<iostream>
using namespace std;

main(){
    char data[100];
   
    ofstream obj;//The writing obj
    ifstream obj2;//The reading obj

        obj.open("test.txt");
        cout<<"\nEnter Your name: ";
        cin>>data;
        obj<<data<<endl;//write the data in file from data[]
        obj.close();

        obj2.open("test.txt");
        cout<<"\nName: ";
        obj2>>data;//read the data from file to data[]
        cout<<data;
        obj2.close();

        obj.open("test.txt",ios::app);
        cout<<"\nEnter Your name: ";
        cin>>data;
        obj<<data<<endl;//write the data in file from data[]
        cout<<"\nEnter Your name: ";
        cin>>data;
        obj<<data<<endl;
        obj.close();

        obj2.open("test.txt");
        cout<<"\nName: ";
        obj2>>data;//read the data from file to data[]
        cout<<data;
        obj2.close();

        
   
    
}
