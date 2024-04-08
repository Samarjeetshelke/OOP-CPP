#include <iostream>
using namespace std;

int main() {
    int n;
    int pos;
    int bit;
    
    
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position(0 indexing): ";
    cin>>pos;
    
    bit = (n>>pos)&1;
    cout<<"\nThe bit at "<<pos<<" is "<<bit;
    

    return 0;
}
