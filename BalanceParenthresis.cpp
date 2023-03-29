//Balanced Parenthesis;;

#include<iostream>
using namespace std;

void solve(int open,int close,string op,vector<string> &V){
    
    if(open==0 && close==0){
        V.push_back(op);
        return;
    }
    
    if(open!=0){
        string op1=op;
        op1.push_back('(');
        solve(open-1,close,op1,V);
    }
    
    if(close>open){
        string op2=op;
        op2.push_back(')');
        solve(open,close-1,op2,V);
    }
    
}


int main(){
    
    int n;
    cin>>n;
    
    int open=n;
    int close=n;
    
    vector<string> V;
    
    solve(open,close,"",V);
    
    for (int i = 0; i < V.size(); i++) {
        cout<<V[i]<<endl;
    }
    
}
