#include<iostream>
using namespace std;

void decTobin(int num){
    int n=num;
    int dec=0;
    int pow =1;
    while(n>0){
        int rem = n%2;
        dec += rem * pow;
        n=n/2;
        pow = pow*10;
    }
    cout << dec << endl;
}
int main(){
    decTobin(10);
}