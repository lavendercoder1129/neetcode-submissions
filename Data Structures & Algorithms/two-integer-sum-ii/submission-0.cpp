class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int low = 0; 
        int high = n-1;

        while(low < high){
            int sum = numbers[low] + numbers[high];
            if(sum > target) high--;
            if(sum < target) low++;
            if(sum == target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
            }
        }
        return ans;
    }
};
