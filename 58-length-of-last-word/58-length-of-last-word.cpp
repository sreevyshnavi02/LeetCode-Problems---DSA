class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = 0; int count = 0;
        int temp = 0;
        int flag = 0;
        while( i != n)
        {
            if(s[i] == ' ')
            {
                if(flag == 0) 
                {
                    temp = count;
                    flag = 1;
                }
                cout << "temp = " << temp << endl;
                count = 0;
            }
            else
            {
                flag = 0;
                count++;
                cout << s[i] << " " << "count = " << count << endl; 
            }
            i++;
        }
        
        if(flag == 0)
        {
            temp = count;
        }
        
        return temp;
    }
};