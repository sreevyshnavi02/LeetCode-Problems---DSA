class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0, end = nums.size() - 1, mid;
        while(begin <= end)
        {
            mid = (begin + end)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        
        return (nums[mid] > target)? mid : mid + 1;
    }
};