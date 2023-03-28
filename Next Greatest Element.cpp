// Next Greatest Element

#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int arr[]={2,3,4,1,5};
    int n=5;
    vector<int> ans;
    
    stack<int> S;
    
    for (int i =4 ; i >=0; i--) {
        
        if(S.size()==0){
            ans.push_back(-1);
        }
        else if(S.size()>0 && S.top()>=arr[i]){
            ans.push_back(S.top());
        }
        else if(S.size()>0 && S.top()<arr[i]){
            while(S.size()>0 && S.top()<arr[i]){
                S.pop();
            }
            
            if(S.size()==0){
                ans.push_back(-1);
            }else{
                ans.push_back(S.top());
            }
        }
        
        S.push(arr[i]);
        
    }
    
    for (int i = n-1; i >=0; i--) {
        cout<<ans[i]<<" ";
    }
}
