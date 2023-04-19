#include<iostream>

using namespace std;

class Calculator{
    int a,b;
    public:

        Calcus(int x,int y){
            a=x;
            b=y;
        }

        double Max(double x,double y){
            if(x>y)
            {
                return x;
            }
            return y;
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

        double areaoftriangle(){
            return (1/2)*a*b;
        }

        double areaofrectangle(){
            return a*b;
        }

        double areaoftriangle(){
            return (1/2)*a*b;
        }

        




};


int main(){


    return 0;
}
