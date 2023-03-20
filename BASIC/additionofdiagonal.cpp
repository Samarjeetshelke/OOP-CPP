#include<iostream>

using namespace std;

main(){
    int mat[3][3];
    int i=0,j=0;
    int sum1=0,sum2=0;
    cout<<"\nEnter the data: ";

    while (i<3)
    {
       j=0;
       while(j<3){
        cin>>mat[i][j];
        j++;
       }
       i++;
    }

    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(j==k){
                sum1+=mat[j][k];
            }
            if(j+k==2){
                sum2+=mat[j][k];
            }
        }
    }

    cout<<"\nThe addition Diagonal 1: "<<sum1<<"\nThe addition of Diagonal 2: "<<sum2;
    
}