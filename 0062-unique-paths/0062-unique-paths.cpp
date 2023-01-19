class Solution {
public:
    int uniquePaths(int m, int n) {
        //total number of moves = m + n - 2
        //number of down transitions = n - 1
        //number of right transitions = m - 1
        // numerator = m + n - 2 factorial
        long res = 1;
        int N = m + n - 2;
        int r = min(m, n) - 1;
        
        for(int i = 1; i <= r; i++){
            res = (res * (N-i+1))/i;
            cout << "N-i+1/i = " << N-i+1 << "/" << i << endl; 
            cout << "res = " << res << endl;
        }
        return res;
    }
};