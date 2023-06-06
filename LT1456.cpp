class Solution {
public:
    int maxVowels(string s, int k) {
        int ans =0;
        int c =0;
        int st=0;
        int l=0;
        int e=0;

        while(e<s.size()){
            if(l==k){
                if(s[st]=='a' || s[st]=='e' || s[st]=='i' || s[st]=='o' || s[st]=='u' ){
                    c--;
                }

                if(s[e]=='a' || s[e]=='e' || s[e]=='i' || s[e]=='o' || s[e]=='u' ){
                    c++;
                }
                st++;
                e++;
            }else{
                if(s[e]=='a' || s[e]=='e' || s[e]=='i' || s[e]=='o' || s[e]=='u' ){
                    c++;
                }
                e++;
                l++;
            }

            ans = max(ans,c);
        }
        return ans;
    }
};
