//Delete middle Element


#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&S,int k){
    if(k==1){
        S.pop_back();
        return;
    }

    int val = S[S.size()-1];
    S.pop_back();
    solve(S,k-1);
    S.push_back(val);
}


void midDel(vector<int>&S,int size){

    if(S.size()==0){
        return;
    }

    int k=(size/2)+1;

    solve(S,size-k+1);

}




int main ()
{

  vector<int> S={2,1,3,5,7};
  midDel(S,5);

  for (int i = 0; i < S.size(); i++) {
     cout<<S[i]<<" ";
  }


}
