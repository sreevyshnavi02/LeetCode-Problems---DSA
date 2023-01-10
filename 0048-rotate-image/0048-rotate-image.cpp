class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        // with another 2d matrix for rotation - for trial
        int n = m[0].size();
        vector<vector<int>> r(n, vector<int>(n));
        // cout << r.size() << " " << r[0].size() << endl;
        // cout << "n = " << n << endl;
        
        for(int i = 0; i < n; i++){
            // cout << " r = " << r.size() << ", " << r[i].size() << endl;
            for(int j = 0; j < n; j++){
                // cout << "m[i][j] = " << m[i][j] << endl;
                // cout << j << ", "<< n - 1 - i << endl;
                r[j][n -1 - i] = m[i][j];
                // cout << "here" << endl;
            }
        }
        
        m = r;
    }
};