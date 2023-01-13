class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         // sorting the given array
        sort(intervals.begin(), intervals.end());
        
        //creating a vector for storing the merged intervals
        vector<vector<int>> merged_vector;
        
        // if no elements are there in the input vector
        if(intervals.size() == 0){
            return merged_vector;
        }
        
        // temp pair 
        vector<int> temp = intervals[0];
        
        for(auto i: intervals){
            if(i[0] <= temp[1]){
                //merge to temp
                temp[1] = max(temp[1], i[1]);
            }
            else{
                //merge not possible - push temp to merged_vector
                merged_vector.push_back(temp);
                
                //update temp value
                temp = i;
            }
        }
        
        //push temp to merged_vector
        merged_vector.push_back(temp);
        return merged_vector;
        
    }
};