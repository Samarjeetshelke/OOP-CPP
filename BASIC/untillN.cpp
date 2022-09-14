#include<iostream>
using namespace std;

int main(){
    int n,i=1;

    cout<<"Enter the N:";
    cin>>n;

    // while(n>0){
    //     cout<<n;
    //     n--;
    // }
     
    //  while(i<=n){
    //     cout<<i<<endl;//to print num
    //     i++;
    //  }

    // while(i<=n){
    //     if(i%2==0){
    //         cout<<i;
    //     }
    //     i++;
    // }
    i=2;
    while(i<n){
        if(n%i==0){
            i++;
            continue;
        }
        cout<<i;
        i++;
    }
}