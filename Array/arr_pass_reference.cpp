#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000; //call by value 
}
void func2(int *ptr){
    ptr[1] = 2000; // same result as func 
}
void printArr(int num[],int n){ //num converts into pointer it gets converted into 8
    for(int i=0;i<n;i++){
        cout << num[i] << ",";
    }
    cout << endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout << arr << endl;
    cout << arr+1 << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;

    func(arr); /*location is passed as arguments & 
                array name=pointer when passed */
    func2(arr);
    cout << arr[0] << endl; 
    cout << arr[1] << endl;
    int n = sizeof(arr) / sizeof(int);
    printArr(arr,n); // n value should be passed because the function doesn't know array size 
}