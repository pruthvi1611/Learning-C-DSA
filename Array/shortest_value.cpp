#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,2,7,8,3,10};
    int n = sizeof(arr) / sizeof(int);
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
            cout << "Current minimum value = " << arr[i] << endl;
        }
    }
    cout << "Minimum Value : " << min;
}