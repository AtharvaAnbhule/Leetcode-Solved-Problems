class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end()); //sorted
        int y = points[0][1]; //first end point
        int ans = 1; //set it to 1
        for(int i=1;i<points.size();i++) {
            if(points[i][0] > y) { //start greater than y
                ans++;
                y = points[i][1];
            }
            y = min(points[i][1],y);
        }
        return ans;
    }
};
