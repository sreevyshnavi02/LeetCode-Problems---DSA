class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        
        ans.push_back(vector <int> {1});    //row 1
        for(int i = 1; i < n; i++){
            // cout << "row = " << i << endl;
            // insert the row into ans vector
            vector<int> row;
            vector<int> prevrow = ans[i-1];
            int prevrow_size = prevrow.size();
            if(prevrow_size > 1){
                // cout << "row > 1" << endl;
                row.push_back(1);
                for(int k = 0; k < prevrow_size - 1; k++){
                    row.push_back(prevrow[k] + prevrow[k+1]);
                }
                row.push_back(1);
                // cout << "row = ";
                // for(int x = 0; x < row.size(); x++){
                //     cout << " " << row[x];
                // }
                ans.push_back(row);
            }
            else{
                ans.push_back(vector<int> {1, 1});      //row 2
            }   
        }
        return ans;
    }
};