class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();  
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i = 0; i<n; i++){
            int x = nums[i];
            int left = i + 1, right = n-1;
            if(i > 0 && nums[i] ==nums[i-1]) continue;           
            while(left < right){
                int sum = nums[left] + nums[right] + x;
                if(sum > 0) right--;
                if(sum < 0) left++;
                if(sum == 0){
                    ans.push_back({x,nums[left],nums[right]});
                    left++;
                    right--;

                    // Skip duplicates for left
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    // Skip duplicates for right
                    while (left < right && nums[right] == nums[right + 1]) right--;
                } 
            }
        }      
        return ans;
    }
};
