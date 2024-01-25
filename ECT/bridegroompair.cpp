// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string a;
    string b;
    int n;
    
    cin>>n;
    cin>>a;
    cin>>b;
    
    int r=0,m=0,c=n;
    
    for(int i=0;i<n;i++){
        if(b[i]=='r'){
            r++;
        }else{
            m++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i]=='r'&&r){
            r--;
            c--;
        }
        else if(a[i]=='m' && m){
            c--;
            m--;
            
        }
        else break;
    }
    cout<<"Pair: "<<c;

    return 0;
}
