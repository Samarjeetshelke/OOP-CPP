#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n =9;//0101
    int cnt =0;
    
    while(n>0){
        if(n&1){
            cnt++;
        }
        n>>=1;
    }
    
    cout<<"The Number of Set Bit is :"<<cnt;
    return 0;
}
