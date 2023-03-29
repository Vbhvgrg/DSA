// Kth Smallest Element

// if we have to find smallest kth Element then will use max heap and if kth largest Element then will use min heap.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    
    priority_queue<int> maxh;
    int arr[]={2,4,3,7,6,8};
    int n=6;
    
    int k;
    cin>>k;
    
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    
    cout<<maxh.top();
    
}
