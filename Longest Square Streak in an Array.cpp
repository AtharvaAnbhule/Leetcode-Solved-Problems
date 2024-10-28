class Solution {

    bool binarySearch(vector<int>& nums, int target) {
        if (target < 0) return false;

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return true;
            if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return false;
    }
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; 

        set<int> processedNumbers ; 
        int longestStreak = 0 ; 

        for( int current : nums ) { 
            // Skip if we've already processed this number
            if (processedNumbers.find(current) != processedNumbers.end())
                continue;

            int streak = current ; 
            int streakLength = 1 ; 

             while (true) {
                // Break if the square would be larger than 10^5 (problem
                // constraint)
                if ((long long)streak * (long long)streak > 1e5) break;

                // If we find the square, continue the streak
                if (binarySearch(nums, streak * streak)) {
                    streak *= streak;
                    processedNumbers.insert(streak);
                    streakLength++;
                } else {
                    break;
                }
            }

            longestStreak = max(longestStreak,streakLength) ; 

            
        }
        return longestStreak < 2 ? -1 : longestStreak;
     }
};