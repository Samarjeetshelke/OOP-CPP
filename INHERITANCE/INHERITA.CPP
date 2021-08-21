#include<iostream.h>
#include<conio.h>
#include<stdio.h>


class b{
	int a;
     public:
	int b;
	void setdata();
	void show();
	int returna();
};

class d: public b{
	int c;
     public:
	void mul();
	void all();
};

void b :: setdata(){
	a = 10;
	b = 20;
}

void b :: show(){
	cout<<"\na :-"<<a<<endl<<"\nb :-"<<b<<endl;
}

int b :: returna(){
	return a;
}

void d ::mul(){
	c = b * returna();
	cout<<"\nmul :-"<<c<<endl;
}

void d :: all(){
	cout<<"\na :- "<<returna();
	cout<<"\nb :-"<<b;
	cout<<"\nc :-"<<c;
}

void main(){
 b objb;
 d objd;
 objb.setdata();
 objb.show();
 objd.setdata();
 objd.b = 30;
 objd.mul();
 objd.all();
 getch();
}