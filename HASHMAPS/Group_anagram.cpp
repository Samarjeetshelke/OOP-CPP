/*

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
*/


vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> ans;
      unordered_map<string,vector<string>>mp;

      for(string a : strs){
        string tmp = a;
        sort(a.begin(),a.end());
        mp[a].push_back(tmp);
      }  

      for(auto a : mp){
        ans.push_back(a.second);
      }
      return ans;
    }
