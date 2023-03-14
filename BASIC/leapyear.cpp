#include<iostream>

using namespace std;

int main(){
    int year;
    
    cout<<"\nEnter the year: ";
    cin>>year;
    
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"\nleap year";

            }
            else{
                cout<<"\n not leap year";
            }
        }
        else{
            cout<<"\nleap year";
        }
    }
    else{
        cout<<"\n not leap year";
    }
    
    
}
