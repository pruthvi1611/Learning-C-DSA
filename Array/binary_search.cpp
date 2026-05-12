#include<iostream>
using namespace std;

void binarySearch(int *arr,int n,int key){
    int st=0;
    int end=n-1;
    while(st<=n){
        int mid = (st+end)/2;
        if(arr[mid]==key){
            cout << mid << endl;
            break;
        }else if(arr[mid] < key){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(int);
    int key = 9;
    binarySearch(arr,n,key);
}