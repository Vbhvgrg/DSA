#include<iostream>
using namespace std;

class Diagonal_Matrix
{
private:
    int n;
    int *A;
public:
    Diagonal_Matrix(int n){
        this->n=n;
        A=new int[n];
    }
    void Set(int i,int j,int value);
    int Get(int i, int j);
    void Display();
    ~Diagonal_Matrix(){
        delete []A;
    };
    
};

void Diagonal_Matrix:: Set(int i,int j,int value){
        if (i==j)
        {
            A[i-1]=value;
        }  
}

int Diagonal_Matrix:: Get(int i, int j){
        if (i==j)
        {
            cout<<A[i-1];
        }
        else
        {
            cout<<"0";
        } 
}

void Diagonal_Matrix:: Display(){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               if (i==j)
               {
                   cout<<A[i];
                   cout<<" ";
                   
               }  
               else
               {
                   cout<<"0 ";
               } 
            }
            cout<<"\n";
            
        }   
}


int main(){
    int n;
    cout<<"Enter the no of row"<<endl;
    cin>>n;
    Diagonal_Matrix d(n);

   cout<<"Enter All Elements"<<endl;

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= n; j++)
       {
           int x;
           cin>>x;
           d.Set(i,j,x);
       }
       
   }
   
   
   cout<<"\n";
   cout<<"Required Diagonal Matrix is "<<endl;
    d.Display();
}

