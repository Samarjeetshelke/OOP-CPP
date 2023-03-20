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
