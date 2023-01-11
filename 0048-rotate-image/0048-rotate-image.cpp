class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        
        // transpose
        int n = m.size();
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                swap(m[i][j], m[j][i]);
            }
        }
        
        // reverse each row in the transpose
        // 2 pointer method
        
        for(int i = 0; i < n; i++){
            cout << "i = " << i << endl;
            int left = 0;
            int right = n - 1;
            while(left < right){
                swap(m[i][left], m[i][right]);
                left++;
                right--;
            }
        }
    }
};