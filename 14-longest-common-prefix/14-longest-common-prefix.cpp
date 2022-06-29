class Solution {
public:
    bool check(vector<string> &strs, int posn, char c)
    {
        for(string s: strs)
        {
            // cout << "Considering " << s << endl;
            if(s.size() == posn)
                return false;
            if(s[posn] != c)
            {
                // cout << s[posn] << " is not same as " << c << endl;
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string retstr;
        char c;
        int posn = 0;
        do
        {
            c = strs[0][posn];
            if(check(strs, posn, c))
            {
                retstr.push_back(c);
                // cout << "Pushed back " << c << endl;
                posn++;
            }
            else
                break;
        }while(1);
        
        return retstr;
    }
};