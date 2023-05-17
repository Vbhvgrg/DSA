//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void reccur(set<string>&S , string a,string ans,int i){
      if(i == a.size()){
          S.insert(ans);
          return;
      }
      
      reccur(S,a,ans+a[i],i+1);
      
      reccur(S,a,ans,i+1);
  }
  
    string betterString(string str1, string str2) {
        set<string> st;
        set<string> st1;
        
       
        
        reccur(st,str1,"",0);
        reccur(st1,str2,"",0);
        
        if(st.size()>=st1.size()){
            return str1;
        }else{
            return str2;
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
