class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int total = r*c - 1;
        int l = 0;
        int h = total;
        while(l<=h){
            int m = (l+h)/2;
            int row = m/c;
            int col = m % c;
            if(matrix[row][col]<target){
                l=m+1;
            }
            else if(matrix[row][col]>target){
                h=m-1;
            }
            else {
                return true;
            }

        }
        return false;

    }
};
