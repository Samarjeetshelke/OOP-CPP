/*
Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:

Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.
*/

 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_map<int,int>mp;
        
        for(int i =0 ;i<n;i++){
            mp[a[i]]++;
        }
        int cnt =0;
        
        for(int i=0;i<m;i++){
            if(mp.find(b[i])!=mp.end()){
                cnt++;
                mp.erase(b[i]);
            }
            
        }
        
        return cnt;
    }
