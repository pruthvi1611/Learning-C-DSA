#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* ptr = &a;
    float pi=3.14;
    float *ptr2=&pi;
    int **ptr3 = &ptr;
    int *ptr4 = NULL;
    cout << *ptr << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;
    *ptr = 20;
    cout << a << endl;
    cout << ptr4 << *ptr4 << endl;
    return 0;
}