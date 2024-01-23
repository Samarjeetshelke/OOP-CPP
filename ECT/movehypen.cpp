// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

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
int main() {
    // Write C++ code here
    char s[] = "sam-h-";
    moveHypen(s,6);

    return 0;
}
