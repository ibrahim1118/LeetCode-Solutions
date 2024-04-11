class Solution {
public:
    string removeKdigits(string num, int k) {
      string ans =""; 
      if (num.size()==k)
         return "0"; 
        stack<char>st ; 
        for (auto i : num)
        {
           
            while(!st.empty()&&k>0&&st.top()>i)
            {
                st.pop(); 
                k--;
            }
            st.push(i); 
        }
        while(!st.empty()){
            if(k==0){
                  ans += st.top();
            }else{
                k--;
            }
          st.pop();
        }
    
        reverse(ans.begin(),ans.end());
        int i=0,n=ans.size();
        while(i<n && ans[i] == '0') i++;
        if(i == n) return "0"; 
        return ans.substr(i,n-i);
    }
};