// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    // Write C++ code here
    int s;
    int e;

    
    cin>>s;
    cin>>e;
    
    int i=0;
    int max=0;
    
    while(max<e){
        if(pow(2,i)>s){
            //cout<<"\n:"<<pow(2,i);
            max=max<pow(2,i)?pow(2,i):max;
        }
        i++;
    }
    
    cout<<max/2;
    
    return 0;
}
