#include<iostream>
using namespace std;

main(){
    int arr[10];
    int max1=0,max2=0;
    int i=0;
    int tmp;

    cout<<"\nEnter the data: ";
    while (i<10)
    {
        cin>>arr[i];
       i++;
    }

    for(i=0;i<10;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }
        else{
            if(max2<arr[i]){
                max2=arr[i];
            }
        }
    }
    
    cout<<"\n1st Largest Number is: "<<max1<<"\n2ed Largest Number is:"<<max2;


}


//more proper code also consider the negative numbers
// Online C++ compiler to run C++ program online
#include<iostream>
#include<limits.h>

using namespace std;

int main() {
    
    int arr[] = {-4,-5,-78,-9,-87,-90};
    int max1=INT_MIN,max2=INT_MIN;
    
    for(int i : arr){
        if(i>max1){
            max2 = max1;
            max1 = i;
        }
        else{
            if(i>max2){
                max2 = i;
            }
        }
    }
    
    
    cout<<"The First Large: "<<max1<<"\nThe Second Largest :"<<max2;
    

    return 0;
}
