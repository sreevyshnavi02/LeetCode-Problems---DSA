class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int flag = 0;
        for(auto c: s)
        {
             //first |
            // stack<char> stack;
            if (c == '|' && flag == 0) //first |
            {
                // stack.push(c);
                flag = 1;
            }
            else if (c == '|') //2nd |
            {
                flag = 0;
            }
            else if (c == '*' && flag == 0)
            {
                count++;
            }
        }
        return count;
    }
};