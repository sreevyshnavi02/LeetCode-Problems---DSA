class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        // cout << "start = " << start;
        int end = 0;
        for(int i = 0; i < s.length(); i++)
        {
            // cout << "inside for : start = " << start << endl;
            
            if(s[i] == ' ' || i == s.length() - 1)
            {
                if(i==s.length()-1)
                    end = i;
                else
                    end = i-1;
                // cout << "space found end = " << s[start] << s[end] << endl;
                while(start < end)
                {
                    // cout << "inside while";
                    swap(s[start], s[end]);
                    // char temp = s[start];
                    // cout << "temp = " << temp;
                    // cout << "Swap done";
                    start++;
                    end--;
                    // cout << "start = " << start << endl;
                    // cout << "end = " << end << endl;
                }
                start = i+1;
            }
        }
        return s;
    }
};