class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
      int total =n*(n+1)/2;  
      int arrtotal = 0;
      for(int i=0;i<n;i++){
          arrtotal+=nums[i];
      }

      return total- arrtotal;
    }
};
