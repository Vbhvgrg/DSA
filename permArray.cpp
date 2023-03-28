#include<iostream>
#include<vector>
using namespace std;

//Permutation of String/Array;

void recurPerm(vector<int> &ds,vector<int> &arr,int freq[],vector<vector<int>> &ans){
    
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
    vector<int> ds;
    vector<vector<int>> ans;
    
    vector<int> arr ={1,2,3};
    int freq[arr.size()]={0};
    
    recurPerm(ds,arr,freq,ans);
    
    for (int i = 0; i < ans.size(); i++) {
        for(int j=0;j<arr.size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
}
