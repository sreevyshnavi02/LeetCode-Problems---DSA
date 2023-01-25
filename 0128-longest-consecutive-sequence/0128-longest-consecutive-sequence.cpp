class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // BRUTE FORCE
        
        //sort
        sort(nums.begin(), nums.end());
        
        int max_count = 0;
        int count = 0;
        int n = nums.size();
        
        if(n == 0){
            return 0;
        }
        
        for(int i = 1; i < n; i++){
            if(nums[i] - nums[i - 1] == 1){
                ++count;
                max_count = max(max_count, count);
                cout << "nums[i] = " << nums[i] << " COUNT = " << count << " MAX_COUNT = " << max_count << endl;
            }
            else if(nums[i] == nums[i - 1]){
                continue;
            }
            else{
                count = 0;
                cout << "nums[i] = " << nums[i] << " COUNT = " << count << " MAX_COUNT = " << max_count << endl;
            }
        }
        return max_count + 1;
    }
};