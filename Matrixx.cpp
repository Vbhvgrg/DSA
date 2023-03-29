#include<iostream>
using namespace std;

int main(){
    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>A[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int Temp;
            int C = 100;
            Temp = A [i][j] + C;

            A[i][j] = A[j][i];

            A[j][i] = Temp - C;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

}#include<iostream>
using namespace std;

int main(){
    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>A[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int Temp;
            int C = 100;
            Temp = A [i][j] + C;

            A[i][j] = A[j][i];

            A[j][i] = Temp - C;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

}
