// Nearly Sorted Array or K sorted Array;;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    
    priority_queue<int,vector<int>,greater<int> > minh; //min heap
    int arr[]={2,4,3,7,6,8};
    int n=6;
    
    vector<int> ans;
    
    int k=3;
    
    
    for(int i=0;i<n;i++){
        minh.push(arr[i]);
        
        if(minh.size()>k){
            ans.push_back(minh.top());
            minh.pop();
            
        }
    }
    
    while(minh.size()>0){
        ans.push_back(minh.top());
        minh.pop();
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    
}
