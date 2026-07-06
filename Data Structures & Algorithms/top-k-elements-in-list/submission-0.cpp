class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mpp;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        vector<int>result;
        priority_queue<pair<int,int>>pq;
        for(auto const& [val, freq] : mpp){
            pq.push({freq,val});
        }       
        
        while( k > 0 && !pq.empty()){
            int topel = pq.top().second;
            result.push_back(topel);
            k--;
            pq.pop();
        }
        return result;

    }
};
