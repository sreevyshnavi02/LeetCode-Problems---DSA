class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> vect;
        int digit, i, j;
        
        if(x >= 0)
        {
            do
            {
                digit = x%10;
                x = x/10;
                vect.push_back(digit);
                // cout << "Pushed " << digit << endl;
            }while(x > 0);
        }
        if(vect.size() == 0)    return false;
        for(i = 0, j = vect.size() - 1; i < j; i++, j-- )
        {
            // cout << "i = "<< i << " j = " << j;
            // cout << vect[i] << " and " << vect[j] << endl;
            if(vect[i] != vect[j])
                return false;
        }
        return true;
    }
};