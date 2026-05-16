#include<iostream>
#include <climits>
using namespace std;

void  maxSubarraySum1(int *arr,int n){
    int maxSum = INT_MIN;
    for(int start=0;start < n; start ++){
        for(int end=start;end<n;end++){
            int currSum =0;
            for(int i=start;i<=end;i++){
                currSum += arr[i];
            }
            cout << currSum << " ";
            maxSum = max(maxSum,currSum);
        }
        cout << "\n";
    }
    cout << "Maximum Subarray : " << maxSum << "\n";
}
void maxSubarraySum2(int *arr,int n){
    int maxSum=INT_MIN;
    for(int start=0;start < n; start ++){
        int currSum = 0;
        for(int end=start;end<n;end++){
            currSum += arr[end];
            maxSum = max(maxSum,currSum);
        }
        currSum =0;
    }
    cout << "Maximuim Array : " << maxSum;
}
int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum1(arr,n);
    maxSubarraySum2(arr,n);
    return 0;
}
