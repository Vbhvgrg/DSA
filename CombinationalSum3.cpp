#define vii vector<vector<int>>
#define vi vector<int>
#define pb push_back
class Solution {
public:
vii ans;
void solve(vi &x,int k,int t,int s){

    //base case
    if(t==0){ // here we have to push value when the target is zero
        if(k==0){   // but the condition is that the size should be k 
        ans.pb(x); //so we will only push the vector when k is zero i.e the size of the give answer is k
        }
        return;
    }
    //recursive case
    for(int i=s;i<=9;++i){
        if(t>=i and k>0){   // here we will perform only when the target is greater than the value we are taking as well as the k should be +ve which means that the condition of having k element is not yet completed
            x.pb(i);
            k--; // whenever a value is inserted k is reduced 
            solve(x,k,t-i,i+1);
            x.pop_back();
            k++;    // whenever a value is removed k is incremented again
        }
    }

}
    vector<vector<int>> combinationSum3(int k, int n) {
        vi x;
        solve(x,k,n,1);
        return ans;
    }
};
