#include<iostream>
using namespace std;

int main(){
    int arr[5]= {7,5,4,3,2};
    int n =sizeof(arr) / sizeof(int);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    int mar[5];
    int num = sizeof(mar)/sizeof(int);
    for(int i=0;i<n;i++){
        cout << "Enter Value " << i+1 << " = ";
        cin >> mar[i];
    }
}