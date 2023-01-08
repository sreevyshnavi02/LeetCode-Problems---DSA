class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // initializing the max_sum to the first elem's value
        int max_sum = nums[0];
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum > max_sum){
                max_sum = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        
        return max_sum;
    }
};