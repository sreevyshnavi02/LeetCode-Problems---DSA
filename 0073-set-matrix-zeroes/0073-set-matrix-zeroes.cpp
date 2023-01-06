class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m, n;
        m = matrix.size();  //number of rows
        n = matrix[0].size();     //number of columns
        vector<vector<int>> zeroes;

        // brute force algo - 
        // tc = O(2m*n)
        // sc = O(z*2) where z = no. of zeroes
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    // cout << "0 at " << i << " " << j << endl;
                    vector<int> row;
                    row.push_back(i);
                    row.push_back(j);
                    // cout << "pushing " << row[0] << " " << row[1] << endl;
                    zeroes.push_back(row);
                }
            }
        }

        // iterate through the zeroes vector
        for(int k = 0; k < zeroes.size(); k++){
            vector<int> row = zeroes[k];
            // substitute zeroes in the corresponding rows and cols
            int i = row[0];
            int j = row[1];
            for(int x = 0; x < m; x++){
                matrix[x][j] = 0;
            }
            
            for(int x = 0; x < n; x++){
                matrix[i][x] = 0;
            }
        }

    }
};