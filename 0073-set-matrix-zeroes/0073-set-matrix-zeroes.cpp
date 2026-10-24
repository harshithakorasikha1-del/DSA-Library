class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> mp;
        for(int i=0;i<rows;i++) {
            for(int j=0;j<col;j++) {
                if(matrix[i][j] == 0) {
                    mp.push_back({i,j});
                }
            }
        }
        for(int i=0;i<mp.size();i++) {
            int l = mp[i][0];
            int m = mp[i][1];
            for(int j=0;j<col;j++) {
                matrix[l][j] = 0;
            }
            for(int j=0;j<rows;j++) {
                matrix[j][m] = 0;
            }
        }
    }
};