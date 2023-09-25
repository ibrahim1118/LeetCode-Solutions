public class Solution {
    public char FindTheDifference(string s, string t) {
     Dictionary<char, int> dic = new Dictionary<char, int>(); 
            foreach (char c in s)
            {
               if(dic.ContainsKey(c))
               {
                    dic[c]++; 
               }
               else
                {
                    dic.Add(c, 1);
                }
            }
            foreach (char c in t)
            {
                if (dic.ContainsKey(c))
                {
                    dic[c]--; 
                }
                else
                {
                    dic.Add(c, -1);
                }
            }
            foreach (var item in dic)
            {
                if (item.Value<0)
                   return item.Key;
            }   
            return 'a'; 
    }
}