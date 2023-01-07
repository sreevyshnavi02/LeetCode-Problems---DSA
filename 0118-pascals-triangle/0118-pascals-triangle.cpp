class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n); // vector of n dynamic vectors
        
        for(int i = 0; i < n; i++){
            //nth row is of size n in Pascal's triangle
            ans[i].resize(i + 1);
            
            ans[i][0] = 1;
            ans[i][i] = 1;
            
            for(int j = 1; j < i; j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
            
        }
        return ans;
    }
};