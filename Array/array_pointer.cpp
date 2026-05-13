#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;
    int y = 25;
    ptr = &y;
    cout << *ptr << "\n";
    int arr[5];
    cout << arr << "\n";
    //arr = &y;
    //arr should be constant or it will bring eror
    return 0;
}