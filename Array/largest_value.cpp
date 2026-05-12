#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,2,9,5};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            cout << "Assiging Current Maximum = " << arr[i] << endl;
        }
    }
    cout << "Largest Value = " << max << endl;
}