class Solution {
public:
    int minFlips(int a, int b, int c) {
        int total =0;

        for(int i=0;i<32;i++){
            int x = a&(1<<i);
            int y =b&(1<<i);
            int z =c&(1<<i);

            if(z==0 && x!=0 && y==0){
                total++;
            }else if(z==0 && x==0 && y!=0){
                total++;
            }else if(z==0 && x!=0 && y!=0){
                total+=2;
            }else if(z!=0 && x==0 && y==0){
                total++;
            }
        }

        return total;
    }
};
