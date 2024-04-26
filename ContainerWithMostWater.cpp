class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;int j=n-1;
        int ans=0;
        int res=0;
        while(i<j){
            // area calculation
            ans=(j-i)*min(height[i],height[j]);
            res=max(ans,res);
            if(height[i]<height[j]) i++;
            else j--;

        }
        return res;

    }
};
