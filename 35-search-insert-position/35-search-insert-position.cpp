class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        int mid;
        while(begin <= end)
        {
            mid = (begin + end)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                begin = mid + 1;
            }
        }
        if(nums[mid] > target)
        {
            return mid;
        }
        else
        {
            return mid + 1;
        }
        // return mid + 1; // change this
    }
};