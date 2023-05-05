class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        int i = 0;
        string new_word = "";
        while(i < n1 && i < n2){
            new_word += word1[i];
            new_word += word2[i];
            i++;
        }
        
        if(n1 > n2){
            new_word = merge_rem(new_word, word1, n1, i);
        }
        else{
            new_word = merge_rem(new_word, word2, n2, i);
        }
        
        
        return new_word;
    }
    
    string merge_rem(string new_word, string word, int len, int ptr){
        // cout << "funtion called " << word << " " << len << " " << ptr << endl;
        while(ptr < len){
            // cout << "inside while" << endl;
            new_word += word[ptr];
            ptr++;
        }
        return new_word;
        
    }
};