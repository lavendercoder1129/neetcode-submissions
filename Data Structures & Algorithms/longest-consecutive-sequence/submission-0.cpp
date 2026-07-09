class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n = nums.size();
        int longest = 0;

        for(int num : nums){
            st.insert(num);
        }
        for(int i = 0; i<n; i++){
            int num = nums[i];
            
            if(st.find(num-1) == st.end()){
                int curr = num;
                int streak = 1;
                while(st.find(curr+1) != st.end()){
                    curr++;
                    streak++;
                }
                longest = max(longest,streak);
            }
            
        }

        return longest;

    }
};
