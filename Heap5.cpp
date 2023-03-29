// Top K Frequent Numbers;;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > minh;
  
  int k=3;
  int arr[]={1,1,1,2,3,3,2,4};
  int n=8;
  
  unordered_map<int,int> mp;
  
  for (int i = 0; i < n; i++) {
      
      mp[arr[i]]++;// to get the frequency of each element;
  }
  
  for (auto i : mp) {
      minh.push({i.second,i.first});
      
      if(minh.size()>k){
          minh.pop();
      }
  }
  
  while(minh.size()>0){
      cout<<minh.top().second<<" ";
      minh.pop();
  }
  
  
    
}
