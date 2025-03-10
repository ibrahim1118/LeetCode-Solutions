class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        
        set<char> st={'a','e','i','o','u'};
        map<char,int> mp;
        long long count=0,ans=0;
        int s=0,l=0;
        for(int r=0;r<word.length();r++){
            if(st.count(word[r])){
                mp[word[r]]++;
            }else{
                count++;
            }
            
            while(l<r && count>k){
                if(st.count(word[l])){
                    mp[word[l]]--;
                    if(mp[word[l]]==0) mp.erase(word[l]);
                }else{
                    count--;
                }
                l++;
                s=l;
            }
         
            while(st.count(word[l]) && mp[word[l]]>1){
                mp[word[l]]--;
                l++;
            }
        
            if(mp.size()==5 && count==k){
                ans+=(l-s) + 1;
            }
        }
        
        return ans;
       
        
    }
};