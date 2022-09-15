#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the Number:";
    cin>>n;

    

    for(int i =0;i<n;i++){
        char ch='A'+n-1;
        for(int j=0;j<n;j++){
            ch-=i+j;
            cout<<" "<<ch<<" ";
        }
        cout<<endl;
    }
}