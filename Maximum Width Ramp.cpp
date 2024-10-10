class Solution {
public:
    int maxWidthRamp(vector<int>& nums) { 
        int n  = nums.size() ; 
        vector<int> stack ; 
        int maxWidth = 0 ; 
        for(int i = 0 ; i< n ; i++ ) { 
            if(stack.empty() || nums[stack.back()] > nums[i]) { 
                stack.push_back(i) ; 
            }

        }

        for( int j = n-1 ; j>=0 ; --j ) { 
            while(!stack.empty() && nums[stack.back()]<=nums[j] ) { 
                maxWidth = max(maxWidth,j-stack.back()) ; 
                stack.pop_back() ; 
            }
        }
        // long int maxWidth = -1 ; 
        // pair<int,int> ramp ; 
        // for(int i = 0 ; i<n ; i++ ) { 
        //       for(int j = i+1 ; j<n ; j++ ) { 
        //              if(i<j && nums[i]<=nums[j] ) { 
        //                   maxWidth = max(maxWidth , j-i ) ; 
        //              }
        //       }
        // }
        // return maxWidth == -1 ? 0 : maxWidth ; 
        return maxWidth ; 
    }
};
