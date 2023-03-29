//Josephus Problem

#include <iostream>
#include <vector>
using namespace std;

void Solve(int k,int index,vector<int> &V,int &ans){

    if(V.size()==1){
        ans=V[0];
        return;
    }

    index=(index+k)%(V.size());

    V.erase(V.begin()+index);

    Solve(k,index,V,ans);

    return;
}

int main()
{

    int n;
    int k;
    cin>>n>>k;

    k=k-1;


    int index=0;

    vector<int> V;


    for(int i=0;i<n;i++){
        V.push_back(i+1);
    }


    int ans=-1;



    Solve(k,index,V,ans);
    cout<<ans;
}
