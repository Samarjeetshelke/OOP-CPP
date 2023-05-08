#include<iostream>
#include<string.h>

using namespace std;

class Accout{
    int accbal;
    int accno;
    char date[15];

    public:

        void createAccout(){
            accno=0;
            accbal=500;
            strcpy(date,"1-1-2010");
        }

        void createAccout(int no,int bal){
            accno=no;
            accbal=bal;
            strcpy(date,"1-1-2010");
        }

        void createAccout(int no,int bal,char datex[15]){
            accno=no;
            accbal=500;
            strcpy(date,datex);
        }

        void disp(){
            cout<<"\nAccount No: "<<accno;
            cout<<"\nAccount Balance: "<<accbal;
            cout<<"\nDate of Birth: "<<date;
        }

};


int main(){
    Accout a,b,c;
    char dt[15]="20-7-2003";
    a.createAccout();
    a.disp();
    b.createAccout(12,1000);
    b.disp();
    c.createAccout(23,50000,dt);
    c.disp();
}