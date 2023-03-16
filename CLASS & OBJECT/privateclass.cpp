#include<iostream>
#include<string.h>

using namespace std;

class Student{
    private:
        string phno;
    
    public:
        int rollno;
        string name;

        void setData(int r,string nm,string ph){
            this->name=nm;
            this->phno=ph;
            this->rollno=r;
        }

        string getPhoneNumber(){
            return this->phno;
        }
};

main(){
    Student obj;
    obj.setData(2253008,"Samarjeet Suresh sShelke","9766908688");
    
    cout<<"\nData: ";
    //cout<<"\nName : "<<obj.name<<"\nRoll No : "<<obj.rollno<<"\nPhone  NO: "<<obj.phno;
    cout<<"\nName : "<<obj.name<<"\nRoll No : "<<obj.rollno<<"\nPhone  NO: "<<obj.getPhoneNumber();
}


/*
To Access the private data we requried the public function ,else we the data remain private or it will give error like line no  30
*/