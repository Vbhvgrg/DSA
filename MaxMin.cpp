#include <iostream>
#include <climits>

using namespace std;

void findMinAndMax(int arr[], int low, int high, int &min, int &max)
{


    if (low == high)
    {
        if (max < arr[low]) {
            max = arr[low];
        }

        if (min > arr[high]) {
            min = arr[high];
        }

        return;
    }

    if (high - low == 1)
    {
        if (arr[low] < arr[high])
        {
            if (min > arr[low]) {
                min = arr[low];
            }

            if (max < arr[high]) {
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {
                min = arr[high];
            }

            if (max < arr[low]) {
                max = arr[low];
            }
        }
        return;
    }

    // find the middle element
    int mid = (low + high) / 2;

    // recur for the left subarray
    findMinAndMax(arr, low, mid, min, max);

    // recur for the right subarray
    findMinAndMax(arr, mid + 1, high, min, max);
}

int main()
{
    int arr[20], n ;
    cout<<"Name:- Vaibhav Garg\n";
    cout<<"Reg.No:- 20BCE0742";

    cout<<"\n Enter the total number of numbers : ";
    cin>>n;
    cout<<" Enter the numbers : ";

    for (int i=0;i<n;i++)
     cin>>arr[i];

    int max = arr[0];
    int min = arr[0];


    findMinAndMax(arr, 0, n - 1, min, max);

    cout << "\n The minimum array element is " << min;
    cout << "\n The maximum array element is " << max;

    return 0;
}
