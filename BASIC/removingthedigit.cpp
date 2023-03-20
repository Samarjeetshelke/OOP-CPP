#include<iostream>
using namespace std;

main(){
    char c[50];
    char b[50];
    int i=0;

    cout<<"\nEnter the Data: ";
   // cin.getline(c,50);
    cin>>c;
    int j=0;
    while(c[i]!='\0'){
        if(c[i]>='0'&&c[i]<='9'){
            i++;
            continue;
        }
        else{
            b[j]=c[i];
            j++;
        }

        i++;
    }

    cout<<"\nThe sTring After Removing the digits: "<<b;
}