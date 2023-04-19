#include<iostream>

using namespace std;

class Area{
        float a,b;
    public:

     

        float areaoftriangle(){
            cout<<"\nEnter the height for Reatangle: ";
            cin>>a;
            cout<<"\nEnter the Base for Reatangle: ";
            cin>>b;
            return (1/2)*a*b;
        }

        float areaofrectangle(){
            cout<<"\nEnter the height for Reatangle: ";
            cin>>a;
            cout<<"\nEnter the width for Reatangle: ";
            cin>>b;
            return a*b;
        }

        float areaofsquare(){
            cout<<"\nEnter the side for Square: ";
            cin>>a;
            return a*a;
        }

};

main(){
    Area obj;
    int opt;
    float res;
    while (1)
    {
       cout<<"\n1.Area Of Rectangle\n2.Area Of Square\n3.Area Of Triangle\nEnter Your Choice: ";
       cin>>opt;

       switch (opt)
       {
       case 1:res=obj.areaofrectangle();
                cout<<"\nThe Area Of Rectangle: "<<res;
        break;

        case 2:res=obj.areaofsquare();
                cout<<"\nThe Area Of Squear: "<<res;
        break;

        case 3:res=obj.areaoftriangle();
                cout<<"\nThe Area Of Triangle: "<<res;
        break;
       
       default:exit(0);
        break;
       }
    }
    
    
}

