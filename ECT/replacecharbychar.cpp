// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s;
    char ch1;
    char ch2;
    
    cin>>s;
    cin>>ch1;
    cin>>ch2;
    
    int i =0;
    
    if(ch1==ch2){
        cout<<"Unchanged!";
        return 0;
    }
    
    while(i<s.size()){
        if(s[i]==ch1){
            s[i]=ch2;
        }
        else if(s[i]==ch2){
            s[i]=ch1;
        }
        
        i++;
    }
    
    cout<<s;

    return 0;
}
