#include<iostream>

using namespace std;

main(){
    int mat1[3][3];

    cout<<"\nEnter the value for matrix 1: ";
    int i=0;
    int j=0;
    while(i<3){
         j=0;

        while(j<3){
            cout<<"Matrix["<<i<<"]["<<j<<"]:";
            cin>>mat1[i][j];
            j++;
        }
        i++;
    }
    cout<<"\nData Befour Transpose: ";
    i=0;
    while(i<3){
        j=0;
        cout<<endl;
        while(j<3){
            cout<<"  "<<mat1[i][j];
            j++;
        }
        i++;
    }

    cout<<"\nData After  Transpose: ";
    i=0;
    while(i<3){
        j=0;
        cout<<endl;
        while(j<3){
            cout<<"  "<<mat1[j][i];
            j++;
        }
        i++;
    }
    
}