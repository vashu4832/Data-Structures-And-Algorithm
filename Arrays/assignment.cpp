#include<iostream>
using namespace std;

void repeatingArray(int *nums, int  n){
    int rep;
    for(int i=0;i<n;i++){
        rep = nums[i];
    }
}

int main(){
    int nums[] = {2,4,6,8,2};
    int n = sizeof(nums)/sizeof(nums[0]);

    repeatingArray(nums, n);
    return 0;
}