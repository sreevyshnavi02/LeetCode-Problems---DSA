class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low, mid;
        low = mid = 0;
        int high = n - 1;
        
        while(mid <= high){
            if(nums[mid] == 2){
                cout << "found 2 with mid = " << mid << endl;
                swap(nums[mid], nums[high]);
                high--;
            }
            else if(nums[mid] == 0){
                cout << "found 0 with mid = " << mid << endl;
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else{
                cout << "found 1 with mid = " << mid << endl;
                mid++;
            }
        }
    }
};