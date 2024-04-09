// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    int pos;
    cout<<"\nEnter the number:";
    cin>>n;
    cout<<"\nEnter position to clear: ";
    cin>>pos;
    
    
    int bitmask = ~(1<<pos);
    int chg = n&bitmask;
    cout<<"The ans is :"<<chg;
    
    

    return 0;
}
