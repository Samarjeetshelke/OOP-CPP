#include<iostream>

using namespace std;

int main(int argc,char * args[]){

    int i=0;
    //args[0]=program file name
    //args[1]=numaber of arguments
    //args[2]=first arguments
    cout<<argc<<endl;
    while(i<argc){//3 argus passed
        cout<<"The command line argument is : "<<args[i]<<endl;
        i++;
    }

    return 0;
}

/*output:

./commandlineargu 12 samarjeet suresh shelke
output:

The command line argument is : E:\CPP Programming\commandlineargu.exe
The command line argument is : 12
The command line argument is : samarjeet
The command line argument is : suresh
The command line argument is : shelke
*/
