class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1;   //0 is unique anyways
        int n = size(nums);
        if(n == 0){
            return 0;
        }
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i - 1]){
                nums[left] = nums[i];
                left++;
            }
            else{
                continue;
            }
        }
        return left;
    }
};