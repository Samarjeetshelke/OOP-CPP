

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>




//using namespace std;

class stu{
    int no;
    char nm[15];
   public:
    stu(){
        no = 0;
	nm[0] ='\0';
    }

    stu(int n,char * c){
        no =n;
        strcpy(nm,c);
    } 

    ~stu(){}

     int getno(){
        return no;
    }

    char * getname(){
        return nm;
    }

    void setdata(){
        cout<<"\nEnter the roll no:-";
        cin>>no;
        cout<<"\nenter the name:-";
        gets(nm);
    }

    void disp(){
        cout<<"\nData:-";
        cout<<"\nRollNo:-";
        cout<<no;
        cout<<"\nName:-";
        puts(nm);
    }
};



//Derived class by private derivation

class mark:private stu{
    double mrk;
   public:
    mark()
    {   stu();
        mrk = 0.0;
    }

    mark(int n,char * c,double m){
       stu:: stu(n,c);
        mrk = m;
    }

    ~mark(){}
    void input(){
       stu:: setdata();
        cout<<"\nEnter the mark:-";
        cin>>mrk;
    }

    void output(){
        stu::disp();
        cout<<"mark = "<<mrk;
    }

};


//main function

int main(){
    char s[15] = "samar";
    mark a;
    a.output();

    mark b(5,s,67.5);
    b.output();


    a.input();
    a.output();
    getch();
    return 0;
}