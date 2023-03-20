#include<iostream>

using namespace std;

main(){
    int mat1[3][3],mat2[3][3],res[3][3];


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

    cout<<"\nEnter the value for matrix 2: ";
    i=0;
    while(i<3){
         j=0;

        while(j<3){
            cout<<"Matrix["<<i<<"]["<<j<<"]:";
            cin>>mat2[i][j];
            j++;
        }
        i++;
    }
    i=0;
    j=0;
    int k=0;
    while(i<3){
        j=0;
        while(j<3){
            k=0;
            res[i][j]=0;
            while(k<3){
                res[i][j]+=mat1[i][k]*mat2[k][j];
                k++;
            }
          j++;
        }
        i++;
    }

    cout<<"\nData After Multiplication: ";
    i=0;
    while(i<3){
        j=0;
        cout<<endl;
        while(j<3){
            cout<<"  "<<res[j][i];
            j++;
        }
        i++;
    }
    
}