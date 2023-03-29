//Sort an Array Using Recursion


#include <iostream>
#include<vector>
using namespace std;

void insert(vector<int>&A,int temp){
    
    if(A.size()==0 || A[A.size()-1]<= temp){
        A.push_back(temp);
        return;
    }
    
    int val = A[A.size()-1];
    
    A.pop_back();
    
    insert(A,temp);
    A.push_back(val);
    
}


void sort(vector<int>&A){
    
    if(A.size()==1){
        return;
    }
    
    int temp = A[A.size()-1];
    
    A.pop_back();
    
    sort(A);
    
    insert(A,temp);
    
    
}



int main ()
{
  
  vector<int> S={2,1,3,5,7};
  sort(S);
  
  for (int i = 0; i < S.size(); i++) {
     cout<<S[i]<<" ";
  }

  
}
