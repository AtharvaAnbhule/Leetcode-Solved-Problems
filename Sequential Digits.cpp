class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
         vector<int> ans;
        for (int i = 1; i < 9; ++i) {
            int x = i;
            for (int j = i + 1; j < 10; ++j) {
                x = x * 10 + j; // for 1 x=12,for 2 x=23,for 3 x=34
                if (x >= low && x <= high) {
                    ans.push_back(x);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
