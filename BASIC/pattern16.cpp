#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the Number:";
    cin>>n;
   int  n1 = (n*2)-1;
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n1;j++){
            if(i+j>=n+1&&j-2<=i)
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<endl;
    }
}