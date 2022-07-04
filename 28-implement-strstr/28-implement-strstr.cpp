class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if(n == 0)
            return 0;
        
        int match;
        int i, j;
        for(i = 0; i <= (h - n); i++)
        {
            match = 1;   
            for(j = 0; j < n; j++)
            {
                cout << "i = " << i << " j = " << j << endl;
                cout << "Comparing " << needle[j] << " and " << haystack[j + i] << endl;
                if(needle[j] != haystack[j + i])
                {
                    match = 0;
                    cout << "Not a match\n" << endl;
                    break;
                }
                    
            }
            cout << "Out of inner for" << endl;
            if(match == 1)
                return i;
        }
        
        return -1;
    }
};