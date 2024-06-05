// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {4,-3,2,1};
    int csum =0;
    int i=0;
    
    
    while(i<4){
        csum =0;
        
        for(int j =i;j<4;j++){
            csum += arr[j];
            
            if(csum == 0){
                cout<<"True";
                cout<<"\nstarting : "<<i<<" ending : "<<j;
                return 0;
            }
        }
        
        i++;
    }
    
    cout<<"False";

    return 0;
}

////Above codes complexity is O(n^2)

///Following code complexity is O(n)
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int>mp;
        int ans =0;
        
        for(int i=0;i<n;i++){
            ans += arr[i];
            
            if(ans == 0){
                return 1;
            }
            if(mp.find(ans)!=mp.end()){
                return 1;
            }
            
            mp[ans]=1;
        }
        
        return 0;
    }
