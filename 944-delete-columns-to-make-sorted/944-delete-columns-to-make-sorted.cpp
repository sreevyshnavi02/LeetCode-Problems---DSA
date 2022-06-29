class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int size = strs[0].size();
        int i, j, rem = 0;
        for(i = 0; i < size; i++)
        {
            // cout << "i = " << i << endl;
            for(j = 0; j < n - 1; j++)
            {
                // cout << "j = " << j << endl;
                if(strs[j][i] > strs[j + 1][i])
                {
                    rem++;
                    // cout << "Gonna Continue" << endl;
                    break;
                }
            }
        }
        return rem;
    }
};