class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map <int, int> map;
        int n = arr.size();
        int i;
        for(i = 0; i < n; i++){
            // cout << "Inside for i = " << i << endl;
            if(map.find(arr[i]) == map.end())
            {
                map[arr[i]] = 1;
            }
            else
            {
                map[arr[i]] += 1;
            }
        }
        vector<int> freq;
        for(auto x = map.begin(); x != map.end(); x++)
        {
            freq.push_back(x -> second);
            // cout << x -> second;
        }
        
        sort(freq.begin(), freq.end(), greater<int>());
        // cout << "Sorted the vector" << endl;
        
//         for( i = 0; i < freq.size(); i++){
//             cout << freq[i];
//         }
        
        int temp = n;
        // cout << "temp = " << temp << ", n/2 = " << n/2 << endl;
        int count = 0;
        int j = 0;
        while(temp > n/2){
            // cout << "Inside while" << endl;
            temp -= freq[j++];
            count++;
        }
        return count;
    }
};