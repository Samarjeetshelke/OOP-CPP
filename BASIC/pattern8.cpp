#include<iostream>
using namespace std;

int main(){
    int n,cnt=0 ;

    cout<<"Enter the Number:";
    cin>>n;

    for(int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" "<<j+i<<" ";
        }
        cout<<endl;
    }
}