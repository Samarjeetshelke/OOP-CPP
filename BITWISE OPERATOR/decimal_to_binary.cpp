// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n =1000;
    string s ="";
    
    int i =0;
    while(n>0){
        cout<<(n&1);
        s+=48+(n&1);//convert to char
        n>>=1;
        i++;
    }
    reverse(s.begin(),s.end());
    cout<<"\n"<<s;
    return 0;
}
