// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string str;
    
    cout<< "Enter the String: ";
    cin>>str;
    int i=0;
    int j=str.length()-1;
   
    while(i<str.length()){
        if(str[i]!=str[j]){
            break;
        }
        i++;
        j--;
    }
    
    if(i==str.length())
    {
        cout<<"\nIts a Palindrome";
    }
    else{
        cout<<"\nIts not a Palindrome";
    }
    

    return 0;
}
