// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int m;
    int n;
    
    cin>>m;
    cin>>n;
    
    int sum =0;
    
    while(m<=n){
        if(m%3==0&&m%5==0){
            sum+=m;
        }
        m++;
    }

cout<<"sum: "<<sum;
    return 0;
}
