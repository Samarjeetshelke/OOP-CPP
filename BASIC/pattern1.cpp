#include<iostream>
using namespace std;
//TO Find Prime Or not
int main(){
    int i=0;
    int n;

    cout<<"Enter The Value";
    cin>>n;

    while(i<n){
        for(int j=0;j<n;j++){
            cout<<" * ";
        }
        cout<<endl;
        i++;
    }
}