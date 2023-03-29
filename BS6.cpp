//Next Alphabetical Element

#include <iostream>

using namespace std;


char BS(char arr[],int start,int end,char ele){
    int ans='#';
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(ele==arr[mid]){
           start=mid+1;
        }
        
        else if(ele<arr[mid]){
            ans=arr[mid];
            end=mid-1;
        }else{
            
            start = mid+1;
        }
    }
    
    return ans;
    
}


int main()
{
    
     char arr[]={'a','b','c','e','f'};
     
     char index=BS(arr,0,4,'f');
    cout<<index;
}
