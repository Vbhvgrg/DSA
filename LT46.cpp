class Solution {
public:
    void perm(vector<int>& nums,vector<int>& ds,int freq[],vector<vector<int>> & ans){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                perm(nums,ds,freq,ans);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int freq[n];
        for(int i=0;i<n;i++){
            freq[i]=0;
        }
        vector<int> ds;
        vector<vector<int>> ans;
        perm(nums,ds,freq,ans);
        return ans;
    }
};
