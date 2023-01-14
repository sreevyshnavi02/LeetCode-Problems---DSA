class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Floyd method 
        int slow, fast;
        
        slow = nums[0];
        fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
        } while(slow != fast);  // found the intersection point
        
        int slow2 = nums[0];
        while(slow != slow2){
            slow = nums[slow];
            slow2 = nums[slow2];
        }
        
        return slow;
    }
};