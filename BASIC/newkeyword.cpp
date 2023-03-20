#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    char *p=new char[10];
    int i=0;
    char *q=(char*)malloc(10*sizeof(char));
    while(i<10){
        p[i]=q[i]=i;
        i++;
    }
    i=0;
    while(i<10){
        cout<<(int)p[i]<<endl;
        i++;
    }
    i=0;
    while(i<10){
        cout<<(int)q[i]<<endl;
        i++;
    }
}