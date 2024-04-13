
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*
we will find the number of set bits in number  if it 1 then it is in power of 2.
1=01
2 = 10;
4 = 100
8 = 1000
16 = 10000
*/

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    int i=0;
    
    while(n>0){
        if(n&1){
            i++;
        }
        n>>=1;
        
    }
    if(i!=1){
        cout<<"No , Its not power of 2";
        
    }
    else{
        cout<<"The Number is in power of 2";
    }
    return 0;
}
