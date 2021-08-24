#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class A{
	protected:
		int no;
	public:
		void setdata(){
			cout<<"\nEnter the RollNo:-";
			cin>>no;
		}

		void putdata(){
			cout<<"\nData:-";
			cout<<"\nRollNo:-"<<no;

		}

};

class B:public A{
	protected:
		char nm[15];
	public:
		void setdata(){
			A::setdata();
			cout<<"\nEnter the name:-";
			gets(nm);
		}

		void putdata(){
			A::putdata();
			cout<<"\nName:-";
			puts(nm);
		}

};

class C : public B{
	protected:
		float mrk;
	public:
		void setdata(){

			B::setdata();
			cout<<"\nEnter the mark:-";
			cin>>mrk;
		}
		void putdata(){
			B::putdata();
			cout<<"\nMark:-";
			cout<<mrk;
		}
};

void main(){
	A p;
	B q;
	C r;

	clrscr();
	p.setdata();
	p.putdata();

	q.setdata();
	q.putdata();

	r.setdata();
	r.putdata();

getch();
}