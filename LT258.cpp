class Solution {
public:
   int add(int x){
       int sum =0;
       while(x!=0){
           int y =x%10;
           x =x/10;
           sum+=y;
       }
       return sum;
   }

    int addDigits(int num) {
        while(num>9){
            num = add(num);
        }

        return num;
    }
};
