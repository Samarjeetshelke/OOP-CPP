#include<iostream>

using namespace std;

class Maxx{
    double a;
    double b;

    public:
        Maxx(double x,double y){a=x;b=y;}
        
        double Max(double x,double y){
            if(x>y)
            {
                return x;
            }
            return y;
        }

        double geta(){
            return a;
        }

        double getb(){
            return b;
        }


};

main(){
    Maxx obj(12.4,45.6);

    cout<<"\nMaximum is :"<<obj.Max(obj.geta(),obj.getb());
}