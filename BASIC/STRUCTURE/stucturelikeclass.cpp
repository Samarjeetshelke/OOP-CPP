#include<iostream>
#include<string>

using namespace std;

struct student{
    protected:
    int roll;
    string nm;

public:
    void display(){
        cout<<"\nData: ";
        cout<<"\nName: "<<this->nm<<"\nRoll No: "<<this->roll;
    }
    student(string name,int n){
        this->nm=name;
        this->roll=n;
    }
    student(){
        this->nm="noname";
        this->roll=8;
    }
};


int main()
{
    struct student s("samarjeet suresh shelke",88);//parameteirsed constructor
   
    //s.nm="samarjeet";//use if not private used
   // s.roll=2253008;
    s.display();

    struct student s1;//default constructor
    s1.display();
    cout<<"\nsize of: "<<sizeof(s);
    return 0;
}
/*

The c++ structure is much diffrent then the c structure,
features of structure:
1.You can have member function
2.u can have constructor
3.u can have access specifier like public private protected
*/
