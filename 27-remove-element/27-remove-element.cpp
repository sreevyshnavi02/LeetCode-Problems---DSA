class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        
        int count = 0, j = 0, i;
        for(i = 0; i < n; i++)
        {
            if(nums[i] == val)
            {
                count++;
            }
        }
        int k = n - count;
        cout << "n = " << n << " count = " << count << " k = " << k << endl;
        
        while(j < count)
        {
            for(i = 0; i < n; i++)
            {
                if(nums[i] == val)
                {
                    cout << "j = " << j << endl;
                    cout << "Swapping " << nums[i] << " and " << nums[n - 1 - j] << endl;
                    int temp = nums[i];
                    nums[i] = nums[n - 1 - j];
                    nums[n - 1 - j] = temp;
                    j++;
                    break;
                }
            }
            for(int p = 0; p < n; p++)
                cout << nums[p] << " ";
            cout << endl;
        }
        return k;
    }
};