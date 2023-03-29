// Minimum Difference Element in a Sorted Array;;

#include <iostream>

using namespace std;

int BS(int arr[],int start,int end,int ele){
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(ele==arr[mid]){
            return arr[mid];
        }else if(ele<arr[mid]){
            end=mid-1;
        }else{
            start = mid+1;
        }
    }
    
    if(abs(arr[start]-ele)<abs(arr[end]-ele)){
        return arr[start];
    }else{
         return arr[end];
    }
    
    
    
   
    
}

int main()
{
   int arr[]={1,4,7,9,10,12};
   
   int start=0;
   int end=6;
   
   int Element=15;
   
   
   int index=BS(arr,start,end,Element);
   cout<<index;
}
