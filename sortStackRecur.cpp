//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insert(stack<int> &s,int x){
    int h;
    if(s.empty()){
        s.push(x);
        return;
    }
    if(s.top()>x){
        h=s.top();
        s.pop();
        insert(s,x);
    }
    else{
        s.push(x);
        return;
    }
    
    s.push(h);
    return ;
}

void recur(stack<int> &s){
    
    if(s.size()==1){
        return;
    }
    
    int x = s.top();
    s.pop();
    recur(s);
    if(s.top()<=x){
        s.push(x);
    }else{
        insert(s,x);
    }
}



void SortedStack :: sort()
{
   recur(s);
}
