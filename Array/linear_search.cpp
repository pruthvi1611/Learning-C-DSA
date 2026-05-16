#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << "Found Key at " << i << "\n";
        }
    }
    return -1;
}
int main(){
    int arr[]={5,2,6,2,30,9};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter Key : ";
    cin >> key;
    linearSearch(arr,n,key);
}