// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include <unordered_map>

using namespace std;

int main() {
    int data[] = {2,2,3,1,4,6,4,5,5};
    map<int,int> mp;
    unordered_map<int,int> mpp;
    
    for(int item : data)
    {
        mp[item]++;
    }
    
    for(int item:data){
        mpp[item]++;
    }
    cout<<"Ordered Map"<<endl;
    for(auto item :mp){
        cout<<item.first<<":"<<item.second<<endl;
    }
    
    
     cout<<"Unordered Map"<<endl;
    for(auto item :mpp){
        cout<<item.first<<":"<<item.second<<endl;
    }
    return 0;
}
