class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int curr = 0;
        int prev =0;
        int ans =0;

        for(auto a: nums){
            if(a==1){
                curr++;
            }else{
                ans = max(ans,curr+prev);
                prev = curr;
                curr =0;
            }
        }

        ans = max(ans,curr+prev);
        if(ans==nums.size()){
            return ans-1;
        }
        return ans;
    }
};
