class Solution {
public:
    bool find132pattern(vector<int>& nums) {
         stack<int> st; //made stack
        int num = INT_MIN; //min number
        int n  = nums.size(); //taken stack size
        for(int i=n-1;i>=0;i--)
        {
            if(num>nums[i])
                return true;
            
            while(!st.empty() && st.top()<nums[i])
            {
                num = st.top();
                st.pop();
            }
            
            st.push(nums[i]);
        }
        
        return false;
        
    }
};
