// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int num;
   int sum=0,i=1;
    cout << "Enter Number: ";
    cin>>num;
    
    
    while(i<num){
        
        if(num%i==0){
            sum+=i;
        }
        i++;
    }
    
    
    if(sum==num){
        cout<<"\nperfect Number";
    }
    else{
        cout<<"\nNot perfect Number";
    }
    return 0;
}



//more Optimized
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   
    int n =8 ;
    int sum =0;
    int i=1;
    
    while(i<=(n/2)){
        if(n%i==0)
            sum+=i;
            
        i++;
    }
    
    if(sum==n){
        cout<<"Perfect";
    }
    
     

    return 0;
}
