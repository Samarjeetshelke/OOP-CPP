// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    int sum=0;
    int dig;
    cout << "Enter the Number:";
    cin>>num;
    int tmp =num;
    while(num>0){
        dig=num%10;
        sum=sum+(dig*dig*dig);
        num/=10;
    }
    
    if(sum==tmp){
        cout<<"\nits a Armstrong Number!";
    }
    else{
        cout<<"\nIts a not Armstrong Number!";
    }
    return 0;
}
