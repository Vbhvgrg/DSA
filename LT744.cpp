class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         char ans = '|';
         bool tru = false;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                ans = min(ans,letters[i]);
                tru = true;
            }
        }
        if(!tru){
            return letters[0];
        }

        return ans;


    }
};
