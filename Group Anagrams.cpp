class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string, vector<string>> mp; //store all angrams
        
        for(auto x: strs){ //iterate through the strs
            string word = x;
            sort(word.begin(), word.end());//sort the words if word is eat it becomes aet
            mp[word].push_back(x); // in mp at aet index insert eat so for all the angrams will have aet as index as all same anagrams sorted order same
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second); //store the result in ans map
        }
        return ans;//return the ans
    }
};
