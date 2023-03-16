#include<iostream>
#include<string.h>

using namespace std;

class person{

    protected:
        char name[10];
        int rollno;

        void setRollNo(){//protected function
            int n;
            cout<<"\nEnter Roll No: ";
            cin>>n;
            this->rollno=n;
        }

    public:

        void setData(int n,char s[]){
            this->rollno=n;
            strcpy(this->name,s);
        }

        void set(){//public function accessing the protectd function
            this->setRollNo();
        }

        void display(){//public function accessing the protectd member
            cout<<"\nName : "<<this->name<<"\nRoll No : "<<this->rollno;
        }


};

int main()
{
    person obj;
    char s[10]="samarjeet";

    obj.setData(2253008,s);
    cout<<"\nData: ";
   // cout<<"\nName: "<<obj.name;//Error like private the data is declaread protected
    obj.display();
    cout<<"\nCorrect the Roll No: ";
    obj.set();
    obj.display();

    return 0;
}
