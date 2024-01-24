// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    // Write C++ code here
  int n;
  cin>>n;
  
  int ar[n];
  int de[n];
  
  for(int i=0;i<n;i++){
      cin>>ar[i];
      cin>>de[i];
      de[i]+=ar[i];
      
  }
  
  for(int i=0;i<n;i++){
      cout<<"\n"<<ar[i]<<":"<<de[i];
  }
  
  int ans =0;
  int i=0;
  int j=0;
  int max = de[max_element(de,de+n)-de];
  cout<<"max: "<<max;
  int min = ar[min_element(ar,ar+n)-ar];
  cout<<"\nMin: "<<min;

  
  while(min<max){
      //cout<<"hi";
      j=0;
      int c=0;
      while(j<n){
          if(min>=ar[j]&&min<=de[j]){
              c++;
          }
          j++;
      }
      if(c>ans){
          ans=c;
      }
      min++;
  }
  
  cout<<"\n"<<ans;
  
  

    return 0;
}
