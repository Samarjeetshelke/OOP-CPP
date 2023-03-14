// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void removedigit(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0'&&str[i]<='9'){
            cout<<str[i];
        }
        i++;
    }
    
}
int main() {
    char str[50];
    
    cout<<"\nEnter the string: ";
    cin>>str;
    
    removedigit(str);

    return 0;
}
