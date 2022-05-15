class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector <int> ans;
        for(int i = 0; i < n - 1; i++)
        {
            int reqd = target - numbers[i];
            //search for reqd
            int start = 0;
            int end = n - 1;
            while(start <= end)
            {
                int mid = (start + end)/2;
                if(numbers[mid] == reqd && mid != i)
                {
                    if(i < mid)
                    {
                        ans.push_back(i + 1);
                        ans.push_back(mid + 1);
                        return ans; 
                    }
                    else
                    {
                        ans.push_back(mid+1);
                        ans.push_back(i+1);
                        return ans; 
                    }
                }
                else if(numbers[mid] > reqd)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            // for(int j = 1; j < n; j++)
            // {
            //     if(numbers[i] + numbers[j] == target && i != j)
            //     {
            //         ans.push_back(i+1);
            //         ans.push_back(j+1);
            //         return ans;
            //     }
            // }
        }
       return ans; 
    }
};