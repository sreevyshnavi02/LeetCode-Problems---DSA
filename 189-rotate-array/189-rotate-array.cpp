class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> ans;
        
        int n = nums.size();
        for(int k = 0; k < n; k++)
        {
            ans.push_back(0);
        }
        for(int i = 0; i < n; i++)
        {
            int pos = (i + k) % n;
            ans[pos] = nums[i];
        }
        nums.swap(ans);
    }
};