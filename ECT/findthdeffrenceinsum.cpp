// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    int range;
    int sumd=0;
    int sumn=0;
    
   cin>>n;
   cin>>range;
   
   int i=0;
   while(i<=range){
       if(i%n==0){
           sumd+=i;
       }else{
           sumn+=i;
       }
       i++;
   }
   
   cout<<"Diffrence is: "<<sumn-sumd;

    return 0;
}


//ex:
/*
divisible:4 
range:20

sumofdivisibleby4 = 4+8+12+16+20
sumofnotdivisibleby4 = 1+2+3+5+6+7+9+10+11+13+14+15+17+19

diff = sumofnotdivisibleby4 - sumofdivisibleby4

*/
