//Reverse a stack/vector;

#include <iostream>
#include<vector>
using namespace std;

void insert(vector<int>&S,int ele){
    if(S.size()==0){
        S.push_back(ele);
        return;
    }
    
    int temp=S[S.size()-1];
    S.pop_back();
    insert(S,ele);
    S.push_back(temp);
    
    
}

void reverse(vector<int>&S){
    
    if(S.size()==1){
        return;
    }
    
    int val=S[S.size()-1];
    S.pop_back();
    reverse(S);
    
    insert(S,val);
    
    
}



int main()
{
   
   vector<int> S={5,4,3,2,1};
   reverse(S);
   
   for (int i = 0; i < 5; i++) {
       cout<<S[i]<<" ";
   }
    
}
