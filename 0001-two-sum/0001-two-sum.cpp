class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> visited;
        for(int i = 0; i < n; i++){
            if(visited.find(target - nums[i]) != visited.end()){
                ans.push_back(i);
                ans.push_back(visited[target - nums[i]]);
                return ans;
            }
            else{
                visited[nums[i]] = i;
            }
        }
        return ans;
    }
};