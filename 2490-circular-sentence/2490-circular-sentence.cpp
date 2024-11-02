class Solution {
public:
    bool isCircularSentence(string sentence) {
        int  a =0; 
        for (int i=0;i<sentence.size();i++ )
        {
            if (sentence[i]== ' ')
            {
                if (sentence[i-1]!=sentence[i+1])
                      a++; 
             }
        }
        return  (a ==0) && sentence[0]==sentence[sentence.size()-1]; 
    }
};