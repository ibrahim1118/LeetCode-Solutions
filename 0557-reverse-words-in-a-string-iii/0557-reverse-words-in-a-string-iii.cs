public class Solution {
    public string ReverseWords(string s) {
        string [] arr = s.Split(' ');
        string ans=""; 
        for (int i=0;i<arr.Length;i++)
        {
            string ss= ""; 
            for (int r=arr[i].Length-1;r>=0;r--)
            {
               ss+=arr[i][r]; 
            }
            if (i==arr.Length-1)
             ans+=ss; 
             else 
             {
                 ans+=ss+" "; 
             }
        }
        
        return ans; 

    }
}