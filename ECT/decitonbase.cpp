// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

char * DectoNBase(int n ,int num){
    char *s=new char[4];
    char d;
    int i=0;
    
    while(num){
     d = num%n;
     s[i]=d<10?(d+48):(d+55);
     i++;
     num/=n;
    }
    //i--;
    /*while(i>=0){
        cout<<s[i];
        i--;
    }*/
    cout<<"\n";
    return s;
}
int main() {
    // Write C++ code here
   int num,n;
    
   cin>>n;
   cin>>num;
   cout<<"Ans : ";
   char * s = DectoNBase(n,num);
   
   cout<<(s+1)<<(s+0);
   
   
   return 0;
}



///using string
// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

string DectoNBase(int n ,int num){
    string s;
    char d;
    int i=0;
    
    while(num){
     d = num%n;
     s+=d<10?(d+48):(d+55);
     i++;
     num/=n;
    }
    //i--;
    /*while(i>=0){
        cout<<s[i];
        i--;
    }*/
    reverse(s.begin(),s.end());
    return s;
}
int main() {
    // Write C++ code here
   int num,n;
    
   cin>>n;
   cin>>num;
   cout<<"Ans : ";
   cout<<DectoNBase(n,num);
   
   //cout<<(s+1)<<(s+0);
   
   
   return 0;
}
