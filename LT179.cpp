class Solution {
public:
    static bool custom_comparator(string a , string b){

         if(a+b>b+a){
             return true;
         }
         return false;

    }
    string largestNumber(vector<int>& nums) {
       vector<string> A;

       for(int x:nums){
           A.push_back(to_string(x));
       }

       sort(A.begin(),A.end(),custom_comparator); 

       string ans;

       for(string x:A){
           ans.append(x);
       }
       if(ans[0]=='0') 
                return "0";
       return ans;
    }
};
