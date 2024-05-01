class Solution {
public:
    string reversePrefix(string word, char ch) {
        int indx =0; 
        for (int i=0;i<word.size();i++)
        {
            if (word[i]==ch)
            {
                indx = i; 
                break; 
            }
        }
        for (int i =0 , j = indx ; i<j;i++, j--)
        {
            char a = word[i]; 
            word[i] = word[j]; 
            word[j] = a;
        }
        return word; 
    }
};