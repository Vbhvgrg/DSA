class Solution {
public:
    void func(int i,string s,vector<vector<string>>&res,vector<string>&ds){
       if(i == s.size()){
           res.push_back(ds);
           return;
       } 

       for(int j=i;j<s.size();j++){
           if(isPalindrome(s,i,j)){
               ds.push_back(s.substr(i,j-i+1));
               func(j+1,s,res,ds);
               ds.pop_back();
           }
       }
    }

    bool isPalindrome(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ds;

        func(0,s,res,ds);
        return res;
    }
};
