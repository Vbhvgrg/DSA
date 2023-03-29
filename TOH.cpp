#include <iostream>

using namespace std;

void TOH(int n,char S,char D,char H){
    if(n==0){
        return;
    }
    TOH(n-1,S,H,D);
    cout<<"Move from"<<S<<"TO"<<D<<endl;
    TOH(n-1,H,D,S);
}

int main()
{
    TOH(3,'A','B','C');

    return 0;
}
