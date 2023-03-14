// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
    int dig;
    
   cout<<"\nEnter the Number: ";
   cin>>num;
   
   while(num>0){
      dig=num%10;
      cout<<dig<<endl;
      num/=10;
   }

    return 0;
}
