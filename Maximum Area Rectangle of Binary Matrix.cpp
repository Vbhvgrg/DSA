// Maximum Area Rectangle of Binary Matrix;;

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void NSL(int arr[],int n,vector<int> &Left){
    
    stack<pair<int,int>> S;
    
    for(int i=0;i<n;i++){
        
        if(S.size()==0){
            Left.push_back(-1);
        }else if(S.size()>0 && S.top().first<arr[i]){
            Left.push_back(S.top().second);
        }else if(S.size()>0 && S.top().first>=arr[i]){
            while(S.size()>0 && S.top().first>=arr[i]){
                S.pop();
            }
            
            if(S.size()==0){
                Left.push_back(-1);
            }else{
                Left.push_back(S.top().second);
            }
        }
        
        S.push({arr[i],i});
        
    }
    
}


void NSR(int arr[],int n,vector<int> &Right){
    
    stack<pair<int,int>> S;
    
    for(int i=n-1;i>=0;i--){
        
        if(S.size()==0){
            Right.push_back(n);
        }else if(S.size()>0 && S.top().first<arr[i]){
            Right.push_back(S.top().second);
        }else if(S.size()>0 && S.top().first>=arr[i]){
            while(S.size()>0 && S.top().first>=arr[i]){
                S.pop();
            }
            
            if(S.size()==0){
                Right.push_back(n);
            }else{
                Right.push_back(S.top().second);
            }
        }
        
        S.push({arr[i],i});
        
    }
    
    reverse(Right.begin(), Right.end());
    
}

int MAH(int arr[],int n){
    vector<int> Left;
    vector<int> Right;
    vector<int> Width(n);
    
    NSL(arr,n,Left);
    NSR(arr,n,Right);
    

    for (int i = 0; i < n; i++) {
        Width[i]=Right[i]-Left[i]-1;
    }
    
    int Area=arr[0]*Width[0];
    
    for (int i = 1; i < n; i++) {
        Area=max(Area,arr[i]*Width[i]);
    }
    
    return Area;
}



int main(){
    int n=4;
    int m=4;
    
    
    int Arr[n][m]={{0,1,1,0},
                   {1,1,1,1},
                   {1,1,1,1},
                   {1,1,0,0}};
    
    
    int row[m];
    
    for (int i = 0; i < m; i++) {
        row[i]=Arr[0][i];
    }
    
    
    
    int mx=MAH(row,m);
   
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(Arr[i][j]==0){
                row[j]=0;
            }else{
                row[j]=row[j]+Arr[i][j];
            }
        }
        mx = max(mx,MAH(row,m));
        
    }
    
    cout<<mx;
    
    
}