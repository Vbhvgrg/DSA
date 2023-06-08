class Solution {
public:
    bool isBitset(int i,uint32_t n){
        if((1<<i)&n){
            return true;
        }
        return false;
    }
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            if(isBitset(i,n)){

                ans = 1<<(31-i) | ans;
            }
        }
        return ans;
    }
};
