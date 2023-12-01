class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s = "" , ss= ""; 
        for (string i : word1)
            s+=i; 
        for (string i : word2)
            ss+=i; 
        return ss==s;
    }
};