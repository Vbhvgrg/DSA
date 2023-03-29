// Finding Element in infinite sorted Array;;

#include <iostream>

using namespace std;

int BS(int arr[],int start,int end,int ele){
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(ele==arr[mid]){
            return mid;
        }else if(ele<arr[mid]){
            end=mid-1;
        }else{
            start = mid+1;
        }
    }
    
    return -1;
    
}

int main()
{
   int arr[]={1,4,7,9,10,12};
   
   int start=0;
   int end=1;
   
   int Element=9;
   
   while(Element>arr[end]){
       start=end;
       end=end*2;
   }
   
   int index=BS(arr,start,end,Element);
   cout<<index;
}
