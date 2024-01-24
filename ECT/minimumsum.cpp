// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int m;
    cin>>m;
    int *s = new int(n);
    
    for(int i =0;i<n;i++){
        cin>>s[i];
    }
    while(m){
         int i = max_element(s,s+n)-s;
         s[i]=s[i]/2;
         m--;
    }
    cout<<"\nAns:\n";
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<s[i];
        sum+=s[i];
    }
    cout<<"\nSum is: "<<sum;
   

    return 0;
}
