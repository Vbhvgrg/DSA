class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        int limit = sqrt(n);
        bool prime[n];

        for(int i=0;i<n;i++){
            prime[i]=true;
        }
       

        for(int i =2;i<=limit;i++){
            if(prime[i]==true){
                for(int j = i*i;j<n;j+=i){
                    prime[j]=false;
                }
            }
        }
        int count =0;
        for(int i=2;i<n;i++){
            if(prime[i]==true){
                count++;
            }
        }
        return count;

    }
};
