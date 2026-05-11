#include <iostream>
using namespace std;

// Find largest in an array

int largestInArray()
{

    int arr[] = {210, 4, 90, 10, 3, 8, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element in an array is " << largest << "\n";
}

// WAP to find smallest in an array
int smallestInArray(){
    int arr[] = {210, 4, 90, 10, 3, 8, 6, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    int smallest = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest element in an array is " << smallest << "\n";
}


// Linear Search
int linearSearch(int *arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

// Binary Search
int binarySearch(int *arr, int n, int key){
    int st = 0, end = n-1;
    while(st <= end){
        int mid = (st+end)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key) {    // 2nd half
            st = mid + 1;
        } else {    // 2st half
            end = mid -1;
        }
    }
    return -1;
}


// WAP to print subarrays 
int subArray(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<"("<<i<<","<<j<<")"<<" ";
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<", ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // int start=0, end=n-1;
    // while (start < end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }

    // printArr(arr, n);

    // cout<<binarySearch(arr,n,14);

    // int a = 10;
    // int *ptr = &a;

    // cout<< ptr<<"\n";

    // ptr += 3;

    // cout<<ptr<<"\n";

    subArray(arr,n);

    return 0;
}