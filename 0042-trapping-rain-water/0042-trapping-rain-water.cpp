class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>mxLeft , mxRight; 
        int mx =0; 
        for (auto i : height)
        {
            mxLeft.push_back(mx); 
            mx =max( i , mx); 
        }
        mx =0;
        for (int i= height.size()-1;i>=0;i--)
        {
            mxRight.push_back(mx); 
            mx = max(mx , height[i]); 
        }
        reverse(mxRight.begin() , mxRight.end()); 
        cout<<mxLeft.size();
        int ans=0; 
        for (int i=0;i<height.size();i++)
        {
            cout<<mxLeft[i]<<" "<<height[i]<<" "<<mxRight[i]<<endl; 
            ans+=max(0 , min(mxLeft[i] , mxRight[i])-height[i]); 
        }
        return ans; 
    }
};