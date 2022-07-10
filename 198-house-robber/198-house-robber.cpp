class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        
        if(n == 2)
            return max(nums[0], nums[1]);
        
        int two = nums[n - 1];
        int one = nums[n - 2];
        nums[n - 3] += nums[n - 1];
        for(int i = n - 4; i >= 0; i--)
        {
            nums[i] += max(one, two);
            two = one;
            one = nums[i + 1];
        }
        
        return max(nums[0], nums[1]);
    }
    
    int max(int a, int b)
    {
        if(a > b)
            return a;

        return b;
    }
};