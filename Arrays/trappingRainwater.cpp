// WAP to find Trapping Rain water
#include<iostream>
#include<climits>
using namespace std;

int trapWater(int *height, int n){
    int leftMax[20000], right_max[20000];
    leftMax[0] = height[0];
    right_max[n-1] = height[n-1];
    
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        right_max[i] = max(right_max[i+1], height[i+1]);
    }
    
    int waterTrapped = 0;
    for(int i=0;i<n;i++){
        int currWater = min(leftMax[i], right_max[i]) - height[i];
        if(currWater>0){
            waterTrapped += currWater;
        }
    }

    return waterTrapped;
}

int main(){
    int height[7] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(height[0]);
    cout<<trapWater(height,n);

    return 0;
}