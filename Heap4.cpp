// Kth Closest Element;;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    
    priority_queue<pair<int,int>> maxh;
    int arr[]={2,4,3,7,6,8};
    int n=6;
    int x=7; //Element closest to x
    int k=3;// no of closest element to x
    
    /*
    
    arr : 2,4,3,7,6,8 
    
    if we do abs(arr[i]-x) then arr will be::-
    
    arr : 5,3,4,0,1,1;
    
    now closest element to x is with minimum value in arr;; we use max heap to get k minimum values;;
    
    */
    
    for(int i=0;i<n;i++){
        maxh.push({abs(arr[i]-x),arr[i]});
        
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    
    while(maxh.size()>0){
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
    
    
    
    
}
