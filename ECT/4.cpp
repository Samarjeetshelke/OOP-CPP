// Online C++ compiler to run C++ program online
#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> arr;
    int j=0;
    int x;
    
    while(j<n){
        cin>>x;
        arr.push_back(x);
        j++;
    }
    
    cout<<"Enter Sum: ";
    int sum;
    cin>>sum;
    
    
    int i=1;
    int a=INT_MAX;
    int b=INT_MAX;
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
        i++;
    }
    
    if((a+b)<sum){
        cout<<(a*b);
    }
    else{
        cout<<"0";
    }
    
    

    return 0;
}
