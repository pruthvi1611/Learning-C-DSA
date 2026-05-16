#include<iostream>
#include<climits>
using namespace std;

void trappingRainmeter(int *height,int n){
    int leftMax[20000];
    int rightMax[20000];
    rightMax[n-1] = height[n-1];
    leftMax[0] = height[0];
    cout << leftMax[0] << ",";
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],height[i-1]);
        cout << leftMax[i] << ",";
    }
    cout << "\n";
    cout << rightMax[n-1] << ",";
    for(int i=n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],height[i+1]);
        cout << rightMax[i] << ",";
    }
    cout << "\n";
    int waterTrapped =0;
    for(int i=0; i<n; i++){
        int currWater = min(leftMax[i], rightMax[i]) - height[i];
        if(currWater>0){
            waterTrapped += currWater;
        }
    }
    cout << "Water Trapped : " << waterTrapped << "\n";
}

int main(){
    int height[7] ={5,4,3,2,1};
    int n = sizeof(height) / sizeof(n);
    trappingRainmeter(height,n);
    return 0;
}