class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size() ; 
        int m = max_element(nums.begin(),nums.end())-nums.begin() ; 
        int maxLen = 0 ; int x = nums[m] ; 

        for(int i =0 ; i< n ; i++) { 
            int len = 0 ; 
            while( i<n && nums[i] == x) { 
                i++ ; 
                len++ ; 
            }

            maxLen= max(maxLen,len) ; 
        }
        return maxLen ; 
    }
};
