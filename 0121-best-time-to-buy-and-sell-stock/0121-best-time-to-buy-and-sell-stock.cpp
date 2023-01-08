class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // brute force with O(n^2) - TLE!!!!
        
        //O(n) soln
        int n = prices.size();
        int max_prof = 0;
        int prof;
        int min_val = prices[0];
        
        for(int i = 0; i < n; i++){
            prof = prices[i] - min_val;
            max_prof = max(max_prof, prof);
            min_val = min(min_val, prices[i]);
        }
        
        return max_prof;
    }
};