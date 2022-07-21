class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, n;
        n = nums.size();
        int res = 0;
        for(i = 0; i < n; i++)
            res = res ^ nums[i];
        return res;
    }
};