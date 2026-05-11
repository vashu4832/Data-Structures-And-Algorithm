#include <iostream>
#include <climits>
using namespace std;

// Print SubArrays
void printSubArray(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << ", ";
        }
        cout << "\n";
    }
}

// Max SubArray Sum -> Brute force approach
int maxSumSubArray1(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(currSum, maxSum);
        }
        cout << "\n";
    }
    cout << "Maximum Sub Array Sum = " << maxSum << "\n";
}

// Max SubArray Sum -> Slightly optimized approach
int maxSumSubArray2(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum Sub Array Sum = " << maxSum << "\n";
}


// Max SubArray Sum -> Using Kadane's Algorithm
int maxSumSubArray3(int *arr, int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
        
    }
    cout<<"Maximum Sub Array Sum = "<<maxSum<<endl;
}


int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSumSubArray1(arr, n);
    cout<<endl;
    maxSumSubArray2(arr,n);
    cout<<endl;
    maxSumSubArray3(arr,n);
    return 0;
}