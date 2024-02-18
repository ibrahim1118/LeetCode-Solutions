class Solution {
public:
    
    bool check(vector<int> h, int b, int l, int mid){
       
		vector<int> diff;
        for(int i = 1; i <= mid; i++){
            if(h[i] > h[i-1]){
                diff.push_back(h[i]-h[i-1]);
            }
        }
        sort(diff.rbegin(), diff.rend());
        for(int i = l; i < diff.size(); i++){
            if(diff[i] > b) return false;
            b -= diff[i];
        }
        return true;
    }
    
    
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        int l = 0, h = n-1;
        while(l < h){
            int mid = (l+h+1)/2;
            if(check(heights, bricks, ladders, mid)){
                l = mid; 
            }
            else{
                h = mid-1; 
            }
        }
        return l;
    }
};