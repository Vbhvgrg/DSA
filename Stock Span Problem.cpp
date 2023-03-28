// Stock Span Problem
// This problem is very similarto next greatest element to left;;

#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
   int arr[]={100,80,60,70,60,75,85};
   int n=7;
   
   vector<int> V;
   stack<pair<int,int>> S;
   
   for(int i=0;i<n;i++){
       if(S.size()==0){
           V.push_back(-1);
       }
       else if(S.size()>0 && S.top().first >=arr[i]){
           V.push_back(S.top().second);
       }else if(S.size()>0 && S.top().first<arr[i]){
           while(S.size()>0 && S.top().first<arr[i]){
               S.pop();
           }
           if(S.size()==0){
               V.push_back(-1);
           }else{
               V.push_back(S.top().second);
           }
       }
       
       S.push({arr[i],i});
   }
   
   for (int i = 0; i < n; i++) {
       V[i]=i-V[i];
       cout<<V[i]<<" ";
   }
}
