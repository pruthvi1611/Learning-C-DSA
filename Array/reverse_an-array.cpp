#include<iostream>
using namespace std;


void reverseArray(int *arr,int n){//reversing with extra space
    int rev[10];
    for(int i=0;i<n;i++){
        rev[n-1-i]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout << rev[i] << " ";
    }
    cout << "\n";
}
void reverseArraySpace(int *arr,int n){
    int st=0;
    int end=n-1;
    for(int i=0;i<n/2;i++){
        end = arr[n-1-i];
        st = arr[i];
        arr[i] = end;
        arr[n-1-i] = st;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(int);
    reverseArray(arr,n);
    int arr1[10]={10,9,8,7,6,5,4,3,2,1};
    int n1 = sizeof(arr1) / sizeof(int);
    reverseArraySpace(arr,n1);

}