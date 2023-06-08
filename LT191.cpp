class Solution {
public:
    bool isSet(int i,uint32_t n){
        if((1<<i)&n){
            return true;
        }
        return false;
    }
    int hammingWeight(uint32_t n) {
        int ans = 0;

        for(int i=0;i<32;i++){
            if(isSet(i,n)){
                ans++;
            }
        }
        return ans;
    }
};
