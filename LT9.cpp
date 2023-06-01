class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        string st = to_string(x);
        int h = st.length();
        
        for(int i=0;i<st.length()/2;i++){
            if(st[i]!=st[h-i-1]){
                return false;
            }
        }

        return true;
    }
};
