// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int begin = 1;
        unsigned int end = n;
        
        while(begin <= end)
        {
            unsigned int mid = (begin + end)/2;
            if(isBadVersion(mid))
            {
                end = mid - 1;
            }
            else
            {
                begin = mid + 1;
            }
        }
        return end + 1;
    }
};