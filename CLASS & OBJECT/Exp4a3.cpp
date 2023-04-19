#include<iostream>

using namespace std;

class Calculator{
    int a,b;
    public:

        Calculator(int x,int y){
            a=x;
            b=y;
        }

     

        int  add(){
            return a+b;
        }

        int sub(){
            return a-b;
        }

        int mul(){
            return a*b;
        }

        int div(){
            return a/b;
        }

        int module(){

            return a%b;
        }
};


int main(){

    Calculator obj(12,34);
    int opt;
    while (1)
    {
        cout<<"\nMenu: \n";
        cout<<"\n1.Add\n2.Sub\n3.Div\n4.Mul\n5.Modulo";
        cout<<"\nEnter Choice: ";
        cin>>opt;

        switch (opt)
        {
        case 1:cout<<"\nThe addition is:"<<obj.add();
            break;

        case 2:cout<<"\nThe substraction is:"<<obj.sub();
                break;

        case 3:cout<<"\nThe division is:"<<obj.div();
                break;
        
        case 4:cout<<"\nThe Multiplication is:"<<obj.mul();
                break;
        
        case 5:cout<<"\nThe Modulo is:"<<obj.module();
                break;
        default: exit(0);
            break;
        }
    }
    
    return 0;
}