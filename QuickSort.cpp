#include<iostream>
using namespace std;

//Quick Sort 

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partioning(int arr[],int l,int r){
    
    int pivot=arr[r];
    
    int i=l-1;
    
    for (int j = l; j < r; j++) {
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
    
    
}

void Quicksort(int arr[],int l,int r){
    
    
    if(l<r){
      int pi=partioning(arr,l,r);  
      Quicksort(arr,l,pi-1);
      Quicksort(arr,pi+1,r);
    }
    
}


int main(){
   int arr[]={1,3,4,5,2};
   Quicksort(arr,0,4);
   
   for (int i = 0; i < 5; i++) {
       cout<<arr[i]<<" ";
   }
}
