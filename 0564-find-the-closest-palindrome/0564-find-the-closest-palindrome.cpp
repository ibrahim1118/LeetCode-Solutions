
class Solution {
public:
    long  getpalindrome(long left,bool even){
        long res=left;
        if(!even)
        left/=10;
        while(left>0){
            res=(res*10)+(left%10);
            left/=10;
        }
        return res;
    }
    string nearestPalindromic(string n) {
        int ind=n.size()/2;
        bool even=n.size()%2==0;
        if(even)
        ind--;
        long left=stol(n.substr(0,ind+1));
        
        vector<long>ans;
        
        ans.push_back(getpalindrome(left,even));
       
        ans.push_back(getpalindrome(left+1,even));
        
        ans.push_back(getpalindrome(left-1,even));
        
        ans.push_back((long)pow(10,n.size()-1)-1);
       
        ans.push_back((long)pow(10,n.size())+1);

        long res=0,diff=INT_MAX,num=stol(n);
        for(auto c: ans){
            if(c==num)
            continue;
            long curr=abs(num-c);
            if(diff>curr){
                diff=curr;
                res=c;
            }
            else if(diff==curr){
                res=min(res,c);
            }
        }
        return to_string(res);
    }
};