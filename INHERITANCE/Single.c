//Simple example of inheritance

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
//#include<cstdio.h>

using namespace std;

class student{
    int rno;
    char name[15];
   public:
    student(){
        rno =0;
        name[0]='\0'; 
   }

   student(int a,char * n)
   {
       rno = a;
       strcpy(name,n);
   } 

   ~student(){}

   int getrno(){
       return rno;
   }

   char * getname(){
       return name;
   }

   void setdata(){
       cout<<"\nEnter the rno:-";
       cin>>rno;
       cout<<"\nEnter name:-";
       //gets(name);
       cin>>name;
   }

   void disp(){
       cout<<"\nrollNO:-"<<rno;
       cout<<"\nName:-"<<name;
   }
   
};

class newstudent:public student{
    double mrk;
   public:
    newstudent():student(){
        mrk = 0.0;
    }

    newstudent(int r,char * n,double c):student(r,n){
        mrk = c;
    }

    ~newstudent(){}

    double getmrk()
    {
        return mrk;
    }

    void input(){
        setdata();
        cout<<"\nmarks:-";
        cin>>mrk;
    }

    void output(){
        disp();
        cout<<"\nmarks:-"<<mrk;
    }

     
};

int main(){
    student a;
   a.setdata();
   a.disp();
    newstudent b;
    b.input();
    b.output();
    return 0;
}
