// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//logic 1 n^2
void moveHypen(char str[],int n){
    int i=0;
    int j=0;
    
    while(j<n){
        if(str[j]=='-'){
            int k=j;
            while(k>i){
                str[k]=str[k-1];
                k--;
                
            }
            str[i]='-';
            i++;
        }
        j++;
    }
    
    cout<<str;
}
//logic 2 n
void moveHypen(char str[],int n){
    int j=n;
    
    while(str[j]!='-' && j>=0){
        j--;
    }
    
    if(j==-1){
        cout<<str;
    }
    else{
        for(int k=j-1;k>=0;k--){
            if(str[k]!='-'){
                str[k]  = str[k] ^ str[j];
                str[j]  = str[k] ^ str[j];
                str[k]  = str[k] ^ str[j];
                j--;
            }
        }
    }
    cout<<str;
}
int main() {
    // Write C++ code here
    char s[] = "sam-h-";
    moveHypen(s,6);

    return 0;
}
