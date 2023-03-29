//Searching in a Nearly Sorted Array

#include <iostream>

using namespace std;


int BS(int arr[],int start,int end,int ele){
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(ele==arr[mid]){
            return mid;
        }else if(mid-1>=start && arr[mid-1]==ele){
            return mid-1;
        }else if(mid+1<=end && arr[mid+1]==ele){
            return mid+1;
        }
        
        
        else if(ele<arr[mid]){
            end=mid-2;
        }else{
            start = mid+2;
        }
    }
    
    return -1;
    
}


int main()
{
    
     int arr[]={5,10,30,20,40};
     
     int index=BS(arr,0,5,20);
    cout<<index;
}
