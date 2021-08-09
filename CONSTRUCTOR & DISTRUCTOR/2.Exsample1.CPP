#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class number{
  int no;
public:
  number(){
    no = 0;            //default constructor
    cout<<"\ndefault";
  }
  number( int n){
    no = n;           //parameterized  constructor
    cout<<"\nparameterized";
  }
  number(number & n){
    no = n.no;        //copy constructor
    cout<<"\ncopy.";
  }
  ~number(){
    cout<<"\ndistructor.";
  }
  void setdata(){
   cout<<"\nenter data :-";
   cin>>no;
  }
  void setdata(int a){
   no = a;
  }
  int getdata(){
   return no;
  }
  void disp(){
   cout<<"\nNo:-"<<no;
  }
  int oddeven(){
   return(no%10 == 0);
  }
  void table();
};

void number :: table(){
  int i = 1;
  for(;i<=10;i++){
   cout<<"\n%d";
  }
}

void main(){
 number p;
 p.setdata();
 p.disp();
 number q(10);
 q.disp();
 number r(p);
 r.disp();
 getch();

}
