//Number of Times a Sorted array is Rotated

#include<iostream>
using namespace std;

int main(){
    
    int arr[]={11,12,15,18,2,5,6,8};
    int N=8;
    
    int start = 0;
    int end=7;
    
    int minEleIndex;
    
    while(start<=end){
        
        int mid = start + (end-start)/2;
        
        int prev = (mid+N-1)%N;
        int next = (mid+1)%N;
        
        if(arr[mid]<prev){
            minEleIndex=mid;
            break;
        }else if(arr[mid]<arr[start]){
            end = mid;
        }else if(arr[mid]>arr[end]){
            start=mid;
        }
        
    }
    
    cout<<minEleIndex;
    
}
