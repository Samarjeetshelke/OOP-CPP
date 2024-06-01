#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n =9;
    int cnt =0;
    
    while(n>0){
        if(n&1){
            cnt++;
        }
        n>>=1;
    }
    
    (cnt==1)?cout<<"Yes":cout<<"No";
    return 0;
}
