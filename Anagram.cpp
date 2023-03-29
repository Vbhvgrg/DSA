#include<iostream>
using namespace std;

// Checking Anagram by Bit method
int main(){
    string A;
    string B;
    cin>>A;
    cin>>B;
    int H=0,G=0,x=0;

    for (int i = 0; A[i]!= '\0' || B[i] != '\0'; i++)
    {
        x=1;
        x = x<<(A[i]-97);
        H=H|x;

        x=1;
        x = x<<(B[i]-97);
        G=G|x;
    }
   if (H != G)
   {
       cout<<"Not Anagram"<<endl;
   }
   else
   {
       cout<<"Anagram"<<endl;
   }
   
   
    
    
    
}
