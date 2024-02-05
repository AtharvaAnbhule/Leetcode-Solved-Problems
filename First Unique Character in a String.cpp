class Solution {
public:
    int firstUniqChar(string s) {
        
    unordered_map<char, int> m;
    

    for(auto ch : s) {
        m[ch]++;
    }
    
   
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        
        //if found return its index
        if(m[ch] == 1)
            return i;
    }
   
    return -1;
    }
};
