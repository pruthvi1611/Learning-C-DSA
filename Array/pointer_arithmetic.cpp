#include<iostream>
using namespace std;

void printArr(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout << *ptr << " ";
        ptr = ptr + 1;
    }
    cout << "\n";
}
int main(){
    int a = 10; // arithmetic additon of pointer will result in bytes addition
    int *aptr = &a;
    
    cout << aptr << "\n";
    aptr++; // + int size byte
    cout << aptr <<"\n";
    cout << *aptr << "\n";

    int b = 10; //addition and subtraction of pointers with arithnmetic
    int *bptr = &b;

    cout << bptr << "\n";
    bptr = bptr + 3;
    cout << *bptr << "\n";
    cout << bptr << "\n";    

    int arr[] = {1,2,3,4,5}; 
    int n = sizeof(arr) / sizeof(int);
    printArr(arr,n);

    int c[] = {1,2,3,4,5}; // subtraction of two pointers
    int *ptr1 = c; // addition of two pointers is not possible
    int *ptr2 = ptr1 + 3; // subtracting two values will return in there between space
    
    cout << *ptr2 << "\n";
    cout << *ptr1 << "\n";
    cout << ptr2-ptr1 << "\n";

    cout << (ptr2==ptr1)<< "\n"; //comparison of pointers 
    cout << (ptr1 < ptr2) << "\n";
    cout << (ptr1 > ptr2) << "\n";

    return 0;
}