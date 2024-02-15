class Solution {
public:
    long long incremovableSubarrayCount(vector<int>& nums) {
    
    int sz = nums.size(), j = sz - 1;
    while (j > 1 && nums[j - 1] < nums[j])
        --j;  //j is traversing
    if (j == 0)
        return sz * (sz + 1) / 2; //return all
    long long res = 1 + sz - j; // after j comes
    for (int i = 1; i < sz; ++i) {
        j = max(i + 1, j);  // max of i+1 and j
        while (j < sz && nums[i - 1] >= nums[j]) 
            ++j;
        res += 1 + sz - j;
        if (nums[i - 1] >= nums[i])
            break;
    }
    return res;

    }
};
