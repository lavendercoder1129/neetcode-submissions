class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx = -1;
        int n = heights.size();
        int l = 0, r = n-1;

        for(int l = 0; l < n; l++){
            for(int r = n-1; r >=l ; r--){
                int base = r - l;
                int h = min(heights[l],heights[r]);
                maxx = max(maxx,base * h);
            }
        }
        return maxx;
    }
};
