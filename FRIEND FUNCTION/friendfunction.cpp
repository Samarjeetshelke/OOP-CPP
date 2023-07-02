#include<iostream>

using namespace std;
class B;//forword declartion
class A{

	int a=10;
	public:
	A(){
	    
	}
	A(int i){
	    a=i;
	}
    friend int add(A,B);
    friend int max(A,B);
};

class B{

	int b=20;
	public:
	B(){
	    
	}
	B(int i){
	    b=i;
	}
	friend int max(A,B);
    friend int add(A,B);
};

int max(A ao,B bo){
    
    if(ao.a>bo.b)
    {
        return ao.a;
    }
	return bo.b;
}

int add(A ao,B bo){

	return ao.a+bo.b;
}

int main(){

	A ao(12);
	B bo(23);
	cout<<"The additon is: "<<add(ao,bo);
	cout<<"\nThe Max Number is : "<<max(ao,bo);
	return 0;
}
