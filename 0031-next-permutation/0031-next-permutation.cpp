class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int i; // breakpoint
        int j;
        
        int low, high; // for reversing 
        
        // find the first index such that the number on the right is greater
        for(i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i+1])
                break;
        }
        
        // if no breakpoint is found within the array
        if(i < 0){
            // reverse the entire array using 2 pointer approach
            low = 0;
            high = n - 1;
            while(low < high){
                swap(nums[low], nums[high]);
                low ++;
                high --;
            }
            
            
        } else{
            
            // find the smallest number on the right of the breakpoint that is greater than it
            for(j = n - 1; j > i; j--){
                if(nums[j] > nums[i]) 
                    break;
            }
            
            // swap ith and jth elem
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            
            // reverse the subarray on the right of the ith element using 2 pointer approach
            low = i + 1; 
            high = n - 1;
            while(low < high){
                swap(nums[low], nums[high]);
                low ++;
                high --;
            }
        }
        
        
        
        
        
        
    }
};