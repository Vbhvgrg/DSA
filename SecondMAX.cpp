#include<iostream>

using namespace std;
int main()
{
   int a[100], n, i, fmax, smax, fmin, smin;

   cout<<"\n Vaibhav Garg";
   cout<<"\n 20BCE0742";


   cout<<"\n\n Enter array size: ";
   cin>>n;

   cout<<"\n Enter the elements: ";
   for(int i=0;i<n;i++)
   cin>>a[i];
   fmax=fmin=a[0];

   // finding first minimum and maximum
   for(int i=1; i<n; i++)
   {
     if(fmax<a[i])
    	 fmax=a[i];
     if(fmin>a[i])
    	 fmin=a[i];
   }

   // assigning second minimum and maximum
   smax=fmin;
   smin=fmax;

   // finding second minimum and maximum
   for(i=0; i<n; i++)
   {
     if(a[i]<fmax && a[i]>smax)
    	 smax=a[i];
     if(a[i]>fmin && a[i]<smin)
    	 smin=a[i];
   }

   cout<<"\n Second maximum = "<<smax;
   cout<<"\n Second minimum = "<<smin;

   return 0;
}
