class Solution {
public:

    void fun(int ind,int sum,int target,vector<int>& nums,vector<int>& ds,vector<vector<int>> &ans){

       
            if(sum == target){
                ans.push_back(ds);
                return;
            }
            
      


        for(int i=ind;i<nums.size();i++){
           if(i!=ind && nums[i]==nums[i-1]) continue;
           if(nums[i]>target-sum){break;}
           ds.push_back(nums[i]);
           fun(i+1,sum+nums[i],target,nums,ds,ans);
           ds.pop_back();
          
       }
        

        




    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        fun(0,0,target,candidates,temp,ans);
        return ans;
    }
};
