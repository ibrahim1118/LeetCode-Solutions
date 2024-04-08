class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       queue<int>s; 
       stack<int>st; 
       for (auto i :students )
           s.push(i); 
        for (int i=sandwiches.size()-1;i>=0;i--)
            st.push(sandwiches[i]); 
        while(!s.empty())
        {
            int x = s.size(); 
            int a =0; 
            for (int i=0;i<x;i++)
            {
                if (s.front()==st.top())
                {
                    a =1;
                    s.pop(); 
                    st.pop(); 
                    break; 
                }
                else 
                {
                    int t = s.front(); 
                    s.pop();
                    s.push(t); 
                }
            }
            if (a==0)
                break; 
        }
        return s.size(); 
    }
};