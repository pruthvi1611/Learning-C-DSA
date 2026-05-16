#include<iostream>
#include<climits>
using namespace std;

void maxSubarraykadane(int *arr,int n){
    int currSum =0;
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        currSum += arr[st];
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum =0;
        }
    }
    cout << "Maximum sum = " << maxSum;
}
int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraykadane(arr,n);
}