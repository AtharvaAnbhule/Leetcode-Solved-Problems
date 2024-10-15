class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //   unordered_map<int,int> freq ; 

        // int n = nums.size() ; 
       
    //    long long ans ; 

    //   for( int i = 0 ; i< n ; i++ ) { 
    //     freq[nums[i]]++ ; 
        
    //   } 
    //   for(int j = 0 ; j< freq.size() ; j++ ) { 
    //     if(freq[j] > 1 ) { 
    //         return true ; 
    //     }
    //   } 
    //   return false ; 
           sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;

    }

};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
