#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int i = 0,bit,ans=0;

    cout<<"Enter the Number:";
    cin>>n;

    while(n!=0){
        bit = n&1;//it will either return 1 or 0 . Properties like & Gate
        n = n>>1;
        ans = (bit*pow(10,i)+ans);
        i++;
    }
    cout<<ans;
}
  