class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length= min(word1.length(), word2.length());
        string new_string = "";
        for(int i=0;i<length;i++){
            new_string+=word1[i];
            new_string+=word2[i];
        }
        while(length< word1.length()){
            new_string+=word1[length];
            length++;
        }
        while(length< word2.length()){
            new_string+=word2[length];
            length++;
        }
        return new_string;
    }
};