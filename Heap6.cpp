// K Closest Points To Origin;;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n=4;
    int k=2;
  int arr[n][2]={{1,3},
                 {2,-2},
                 {5,8},
                 {0,1}};
                 

    priority_queue<pair<int,pair<int,int>>> maxh;
    
    // origin is {0,0}
    // Distance = sqrt(x1^2 - x2^2 + y1^2 - y2^2 )
    // storing distance as key in queue and printing the element with shortest distance to origin;;
    
    // x^2=arr[i][0]*arr[i][0];
    //y^2=arr[i][1]*arr[i][1];
    
    
    for (int i = 0; i < n; i++) {
       maxh.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1], {arr[i][0],arr[i][1] } });
       
       if(maxh.size()>k){
           maxh.pop();
       }
    }
    
    while(maxh.size()>0){
        pair<int,int> p = maxh.top().second;
        
        cout<<p.first<<" "<<p.second<<endl;
        
        maxh.pop();
    }
  
  
    
}
