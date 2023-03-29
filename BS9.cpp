// Allocate Minimum No of pages

#include<iostream>
using namespace std;

bool isvalid(int arr[],int k,int n,int mid){

    int student =1;
    int sum=0;

    for(int i=0;i<n;i++){
           sum+=arr[i];

           if(sum>mid){
            student++;
            sum=arr[i];
           }

           if(student>k){
            return false;
           }
    }
    return true;

}

int main(){
    
    int n=4; //size of arr
    int k=2; // No of students in which book should be divided
    int arr[]={10,20,30,40};

    int start=-1;
    int end=0;

    if(k>n){
        cout<< "-1"<<endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>start){
            start=arr[i];
        }

        end+=arr[i];
    }
     
     int ans=-1;

     

    while (start<=end)
    {
        int mid = start +(end-start)/2;
        
        
        if(isvalid(arr,k,n,mid)){

            ans=mid;
            end=mid-1;
        }else{
            start = mid+1;
        }
       

    }

    cout<<ans;
    
    

}
