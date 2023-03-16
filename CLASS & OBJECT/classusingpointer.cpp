#include<iostream>

using namespace std;

class Rectangle{
    public://specifier

        int height;//data member
        int width;

        int getWidth(){//member function
            return this->width;
        }

        void setData(){
            cout<<"\nEnter the Width: ";
            cin>>this->width;

            cout<<"\nEnter the Height: ";
            cin>>this->height;
        }
        int getHeight(){
            return this->height;
        }

        int area(int height,int width);
};


int Rectangle::area(int height,int width){
    return height*width;
}

int main(){
    Rectangle *obj= new Rectangle();
    obj->setData();
   // cout<<obj;
    cout<<"\nThe Height of Rectangle is "<<obj->getHeight();
    cout<<"\nThe Width of Rectangle is "<<obj->getWidth();
    cout<<"\nThe Area of Rectangle is "<<obj->area(obj->height,obj->width);

    return 0;
}