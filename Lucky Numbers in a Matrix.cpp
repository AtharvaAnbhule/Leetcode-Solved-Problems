class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       int rows = matrix.size();
       int cols = matrix[0].size();

     vector<int> row_minimums(rows, INT_MAX);
        vector<int> col_maximums(cols, 0);



        for(int i =0;i<rows;++i){
            for(int j =  0 ; j<cols;++j ){ 
                int cl = matrix[i][j];
                row_minimums[i] = min(row_minimums[i],cl);
                col_maximums[j] = max(col_maximums[j],cl);
            }
        }
        for(int i =0;i<rows;++i){
            for(int j =  0 ; j<cols;++j ){ 
              int cl = matrix[i][j];
               if (cl == row_minimums[i] && cl == col_maximums[j]) {
                    return {cl};
                }
            }}
            return {};
    }
};
