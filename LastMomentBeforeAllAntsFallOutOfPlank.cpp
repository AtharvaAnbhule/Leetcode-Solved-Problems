class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // each ant with a soeed of 1unit/sec
        int time=0;

        for(int l:left)
           time=max(time,l);
        
        for(int r:right)
           time=max(time,n-r);
        
        return time;
    }
};
