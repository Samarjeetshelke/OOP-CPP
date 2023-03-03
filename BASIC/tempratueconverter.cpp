#include<iostream>

using namespace std;

int main(){
    int f,c;
    
    cout<<" Menu "<<endl;
    cout<<"1.Fahrenheit To Celsius\n2.Celsius To Fahrenheit\nEnter Your Choice: ";
    int opt;
    cin>>opt;
    if(opt==1){
        cout<<"\nEnter The tempreture in fahrenheit: ";
        cin>>f;
        c=5*(f-32)/9;
        cout<<"\nThe Tempreture in Celcius is "<<c;
    }
    else{
        cout<<"\nEnter The tempreture in celcius: ";
        cin>>c;
        cout<<"\nThe Tempreture in fahrenheit is "<<((9/5)*(c+32));
    }
    return 0;
}