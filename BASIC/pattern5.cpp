#include<iostream>
using namespace std;

int main(){
    int n ;

    cout<<"Enter the Number:";
    cin>>n;

    // for(int i =0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j<=i)
    //          cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
             cout<<" * ";
        }
        cout<<endl;
    }
}