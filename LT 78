class Solution {
public:
    vector<vector<int>> ans;
    

    void recur(vector<int>& nums,vector<int>sub,int i){
        if(i== nums.size()){
            ans.push_back(sub);
            return;
        }

        sub.push_back(nums[i]);
        recur(nums,sub,i+1);

        sub.pop_back();
        recur(nums,sub,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        recur(nums,sub,0);  
        return ans;  
    }
};
