#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Permutation of String/Array;

void recurPerm(vector<string> &ds,vector<string> &arr,int freq[],vector<vector<string>> &ans){
    
    if(ds.size()==arr.size()){
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        if(!freq[i]){
            ds.push_back(arr[i]);
            freq[i]=1;
            recurPerm(ds,arr,freq,ans);
            freq[i]=0;
            ds.pop_back();
        }
    }
    
    
    
}

int main(){
    vector<string> ds;
    vector<vector<string>> ans;
    
    vector<string> arr ={"A","B","C"};
    int freq[arr.size()]={0};
    
    recurPerm(ds,arr,freq,ans);
    
    for (int i = 0; i < ans.size(); i++) {
        for(int j=0;j<arr.size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
}
