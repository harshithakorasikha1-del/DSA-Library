class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        for(int i=0;i<rows;i++) {
            for(int j=0;j<i;j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i=0;i<rows;i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};