#include<iostream>
#include<string.h>

using namespace std;

class person{

    private:
        string name;
        int rollno;

    public:

        person(){//default constructor
            
            this->name="noname";
            this->rollno=0;
        }
        
        person(int r,string nm);//parameterised constructor

        person(person & obj){//copy constructor
            this->name=obj.name;
            this->rollno=obj.rollno;
        }

        void setData(int n,string nm){
            this->rollno=n;
            this->name=nm;
        }



        void display(){//public function accessing the protectd member
            cout<<"\nName : "<<this->name<<"\nRoll No : "<<this->rollno;
        }
};


person::person(int r,string nm){
    this->rollno=r;
    this->name=nm;
}
 
int main()
{
  
    person p1;
    p1.display();

    person p2(8,"samarjeet suresh shelke");
    p2.display();

    person p3=p2;
    p3.display();

    return 0;
}
