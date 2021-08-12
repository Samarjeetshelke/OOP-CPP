#include<iostream.h>
#include<stdio.h>
#include<conio.h>
//using namespace std;

class num
{
private:
    int a,b;
public:
    num(){
        a = 0;
        b = 0;
    }

    num(int x,int y){
        a = x;
        b = y;
    }

    num(num & t){
        a= t.a;
        b= t.b;
    }

    ~num(){};

    void setdata(){
        cout<<"\nenter the a and b :-";
        cin>>a>>b;
    }

    void disp(){
        cout<<a<<endl<<b<<endl;
    }

    num operator +(int v){
        num t;
        t.a = a+v;                  // + operators version 1
        t.b = b+v;
        return t;
    }

    num operator +(num & v){
        num t(a+v.a,b+v.b);          // + operators version 2
        return t;
    }

    num operator -(int v){
        num t(a-v,b-v);              // - operators version 1
        return t;
    }

    num operator - (num &v){
        num t(a+v.a,b+v.b) ;          // - operators version 2
        return t;
    }
};

// num::num()
// {
//     a = b = 0;
// }

int main(){
    num p,q,r;
    p.setdata();
    p.disp();
    q = p+3;
    q.disp();
    r = p+q;
    r.disp();
    r = q-2;
    r.disp();
    getch();
return 1;
}