class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r, c;
        r = matrix.size();
        c = matrix[0].size();
        
        cout << "r = " << r << ", c = "<< c << endl;
        for(int i = 0; i < r; i++){
            //in each row
            cout << matrix[i][0] << " " << matrix[i][c - 1] << endl;
            if(matrix[i][0] <= target && matrix[i][c - 1] >= target){
                cout << "in the row " << i << endl;
                for(int j = 0; j < c; j++){
                    if(matrix[i][j] > target){
                        return false;
                    }
                    else if(matrix[i][j] == target){
                        return true;
                    }
                }   
            }
        }
        
        return false;
    }
};