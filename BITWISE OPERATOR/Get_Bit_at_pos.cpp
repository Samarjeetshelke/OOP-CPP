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
///using BitMask

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n =5;//0101
    int pos =2;
    
    int msk = 1<<2;//001 -> 100
    
    if((msk&n)){//0101 & 0100   if it return more then 0 ans then its 1
        cout<<1;
    }
    else{
        cout<<0;
    }
    
    return 0;
}
