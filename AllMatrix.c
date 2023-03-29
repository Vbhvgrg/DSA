// This Program Will Create All Special Matrix with efficient storage management.
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
class LowTri_Matrix
{
private:
    int n;
    int *A;
public:
    LowTri_Matrix(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int value);
    int Get(int i, int j);
    void Display();
    ~LowTri_Matrix(){
        delete []A;
    };
    
};
void LowTri_Matrix:: Set(int i,int j,int value){
        if (i>=j)
        {
            A[n*(j-1)-(j-2)*(j-1)/2+i-j]=value;
        }  
}

int LowTri_Matrix:: Get(int i, int j){
        if (i>=j)
        {
            cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j];
        }
        else
        {
            cout<<"0";
        } 
}
void LowTri_Matrix:: Display(){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
               if (i>=j)
               {
                   cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j];
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
class UpprTri_Matrix
{
private:
    int n;
    int *A;
public:
    UpprTri_Matrix(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int value);
    int Get(int i, int j);
    void Display();
    ~UpprTri_Matrix(){
        delete []A;
    };
    
};
void UpprTri_Matrix:: Set(int i,int j,int value){
        if (i<=j)
        {
            A[n*(i-1)-(i-2)*(i-1)/2+j-i]=value;
        }  
}

int UpprTri_Matrix:: Get(int i, int j){
        if (i<=j)
        {
            cout<<A[n*(i-1)-(i-2)*(i-1)/2+j-i];
        }
        else
        {
            cout<<"0";
        } 
}
void UpprTri_Matrix:: Display(){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
               if (i<=j)
               {
                   cout<<A[n*(i-1)-(i-2)*(i-1)/2+j-i];
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
    int n,choice;
    cout<<"Enter the no of row"<<endl;
    cin>>n;
    cout<<"\n";
    cout<<"Select the type of Matrix"<<endl;
    cout<<"1.Diagonal Matrix"<<endl;
    cout<<"2.Lower Triangular Matrix"<<endl;
    cout<<"3.Upper Triangular Matrix"<<endl;
    Diagonal_Matrix d(n);
    LowTri_Matrix l(n);
    UpprTri_Matrix u(n);

    cin>>choice;
    switch (choice)
    {
    case 1:
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
       d.Display();
        break;
    
    case 2:
        cout<<"Enter All Elements"<<endl;
            for (int i = 1; i <= n; i++)
            {
              for (int j = 1; j <= n; j++)
               {  
                  int x;
                  cin>>x;
                  l.Set(i,j,x);
               }
            }
        
        
           cout<<"\n";
           l.Display();
       
        break;
    case 3:
        cout<<"Enter All Elements"<<endl;
        for (int i = 1; i <= n; i++)
       {
           for (int j = 1; j <= n; j++)
           {
           int x;
           cin>>x;
           u.Set(i,j,x);
           }
       }
       cout<<"\n";
       u.Display();
        break;
    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
}
