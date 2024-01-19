#include<iostream>
using namespace std;



int main(){
    string s1,s2;
    cout<<"Enter: ";
    cin>>s1;
    cin>>s2;
    
    int i=0;
    int pos;
    int j=0;
    
    while(i<s1.length()){
        if(s1[i]==s2[j]){
            pos=i;
            while(j<s2.length()){
                
                if(s1[i]!=s2[j]){
                    j=0;
                    i=pos;
                    break;
                }
                i++;
                j++;
            }
            if(j==s2.length()){
                cout<<"Substring";
                return 0;
            }
        }
        i++;
    }
    cout<<"Not Substring";
    
}
