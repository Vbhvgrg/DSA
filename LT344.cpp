class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i=0;
        int j=n-1;

        for(int i=0;i<n/2;i++){
            char x = s[j];
            s[j]=s[i];
            s[i]=x;
            j--;
        }
    }
};
