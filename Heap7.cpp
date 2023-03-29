// Connect Ropes to Minimise the Cost;;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//here we will connect to rope with minimum length so cost will be minimum;;

int main(){
   
  int arr[]={1,2,3,4,5};
  int n=5;
  int cost =0;
  
  
  priority_queue<int,vector<int>,greater<int>> minh;
  
  
  for (int i = 0; i < n; i++) {
      minh.push(arr[i]);
  }
  
  while(minh.size()>=2){
      int first = minh.top();
      minh.pop();
      int second=minh.top();
      minh.pop();
      cost=cost+first+second;
      
      minh.push(first+second);
      
  }
  
  
  cout<<cost;
  
    
}
