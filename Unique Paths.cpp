//robot on mxn grid   m->rows n->columns
//top left corener grid[0][0]
//bottom right corner grid[m-1][n-1]
//down and right move only

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> f(m, vector<int>(n));
        //first is 1 as visited
        f[0][0] = 1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i) {
                    f[i][j] += f[i - 1][j];
                }
                if (j) {
                    f[i][j] += f[i][j - 1];
                }
            }
        }
        return f[m - 1][n - 1];
    }
    
};
