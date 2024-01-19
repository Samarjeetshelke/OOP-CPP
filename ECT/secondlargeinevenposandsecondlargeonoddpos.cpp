// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


int secondLarge(int arr[],int n){
    int i=0;
    int a=0;
    int b=0;
    int tmp=0;
    
    
    while(i<n){
       if(a<arr[i]){
           b=a;
           a=arr[i];
       }
       else{
          if(arr[i]>b){
              b=arr[i];
          }
       }
        i+=2;
    }
    return b;
}

int secondSmall(int arr[],int n){
    int i=1;
    int a=999;
    int b=999;
    int tmp=0;
    
    
    while(i<=n){
       if(a>arr[i]){
           b=a;
           a=arr[i];
       }
       else{
          if(arr[i]<b){
              b=arr[i];
          }
       }
        i+=2;
    }
    return b;
}

int main() {
    // Write C++ code here
    int n;
    int a;
    int arr[7] = {1,3,4,7,8,6,5};
    cout<<"Large: "<<secondLarge(arr,7)<<endl;
    cout<<"Small: "<<secondSmall(arr,7);
    
    
    
    return 0;
}
