#include<iostream>
using namespace std;
//TO Find Prime Or not
int main(){
    int n,i=2,count=0;

    // cout<<"Enter the Number:";
    // cin>>n;

    // for(;i<n;i++){
    //     if(n%i==0){
    //         count++;
    //     }
    // }
    // if(count>0){
    //     cout<<"Not Prime";
    // }
    // else{
    //     cout<<"Prime";
    // }
    //---------------------Logic1
    // for(;i<n;i++){
    //     if(n%i==0){
    //         break;
    //     }
    // }
    // if(n==i){
    //     cout<<"Prime Number!";
    // }
    // else{
    //     cout<<"Not Prime Number!";
    // }
    //----------------------Logic2
    for(int x = 10;x<=100;x++){
        i=2;
         for(;i<x;i++){
            if(x%i==0){
                 break;
            }
         }
        if(x==i){
            cout<<i;
        }
    }
    //--------------------Login3 between
     

}