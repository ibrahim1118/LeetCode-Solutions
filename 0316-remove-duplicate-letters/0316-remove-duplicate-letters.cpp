class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        vector<int> freq(26);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        stack<char> st;
        vector<bool> check(26,false); 
        for(int i=0;i<n;i++){
            char temp = s[i];
            if(check[temp-'a']){
                freq[temp-'a']--;
                continue;
            }
            while(!st.empty() && temp<st.top() && freq[st.top()-'a']>1){
                freq[st.top()-'a']--;
                check[st.top()-'a'] = false;
                st.pop();            
            }
            st.push(temp);
            check[temp-'a'] = true;
        }

        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};