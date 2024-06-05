/*

Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.

Note: The final output will be in lexicographic order.


Example 1:

Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output:

act cat tac 
god dog

Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
*/


vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string,vector<string>>mp;
        vector<vector<string>>ans;
        
        for(auto a : string_list){
            string tmp =a;
            sort(a.begin(),a.end());
            mp[a].push_back(tmp);
        }
        
        for(auto a:mp){
            ans.push_back(a.second);
        }
        
        return ans;
    }
