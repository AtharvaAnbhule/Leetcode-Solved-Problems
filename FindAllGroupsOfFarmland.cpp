class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        // m*n matrix with the name land
        // 0 -> firested land 1->farmland
        // and can be represented by a coordinate system where the top left corner of land is (0, 0) and the bottom right corner of land is (m-1, n-1).
        vector<vector<int>> result;
        int m = land.size();
        int n= land[0].size();

        auto findfarmland = [&](int row,int col){
            vector<int> coordinates = {row,col};
            int r=row,c=col;

            while(r<m && land[r][col] ==1) r++;
            while(c<n && land[row][c] ==1) c++;

            coordinates.push_back(r-1);
            coordinates.push_back(c-1);

             
             //after set all to 0
            for(int i =row;i<=r-1;i++){
                for(int j=col;j<=c-1;j++){
                    land[i][j]=0;
                }
            }
            return coordinates;

        };

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j] ==1){
                    result.push_back(findfarmland(i,j));
                }
            }
        }
        return result;
    }
};
