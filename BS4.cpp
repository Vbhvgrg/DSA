//Find Floor of an element in a Sorted Array

#include <iostream>

using namespace std;


int BS(int arr[],int start,int end,int ele){
    int ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(ele==arr[mid]){
            return arr[mid];
        }
        
        else if(ele<arr[mid]){
            end=mid-1;
        }else{
            ans=arr[mid];
            start = mid+1;
        }
    }
    
    return ans;
    
}


int main()
{
    
     int arr[]={5,10,20,30,40};
     
     int index=BS(arr,0,5,20);
    cout<<index;
}
