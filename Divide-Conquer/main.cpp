#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei){ //O(n)
    vector<int> temp;
    int i = si;
    int j = mid+1;

    while(i <= mid && j <= ei) {
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= ei){
        temp.push_back(arr[j]);
        j++;
    }

    // vector -> original array
    for(int idx=si, x=0; idx<=ei; idx++){  // original array
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei){ //O(n log n)
    if(si >= ei){
        return;
    }

    int mid = si + (ei - si) / 2;  //si + (ei - si) /2 -> we can use this also

    mergeSort(arr, si, mid);   // left half
    mergeSort(arr, mid+1, ei);   //right half

    merge(arr, si, mid, ei);  //conquer
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int si, int ei){
    int i = si-1;
    int pivot = arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);

    // pivotIdx
    return i;
}

void quickSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int pivotIdx = partition(arr, si, ei);

    quickSort(arr, si, pivotIdx-1);  //left-half
    quickSort(arr, pivotIdx+1, ei);  //right-half
}

int search(int arr[], int si, int ei, int tar){
    if(si > ei){
        return -1;
    }

    int mid = si + (ei-si) /2;
    if(arr[mid] == tar){
        return mid;
    }

    if(arr[si] <= arr[mid]){ //L1
        if(arr[si] <= tar && tar <= arr[mid]){
            // left
            return search(arr, si, mid-1, tar);
        } else {
            // right
            return search(arr, mid+1, ei, tar);
        }
    } else {
        // L2
        if(arr[mid] <= tar && tar <= arr[ei]){
            // right half
            return search(arr, mid+1, ei, tar);
        } else {
            // left half
            return search(arr, si, mid-1, tar);
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;

    cout<<"Idx : " << search(arr, 0, n-1, 0)<<endl;  
    return 0;
}