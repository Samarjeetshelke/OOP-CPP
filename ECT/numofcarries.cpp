// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
   int n1 = 413;
   int n2 = 389;
   int c=0;
   int cy=0;
   int a,b;
   
   cout<<"is";
   while(n1>=0&&n2>=0){
       a = n1%10;
       b = n2%10;
       
       if((a+b+cy)>9){
           c++;
           cy=1;
       }
       else{
           cy=0;
           
       }
       n1/=10;
       n2/=10;
       
   }
   cout<<"carries: "<<cy;

    return 0;
}
