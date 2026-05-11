#include<iostream>
using namespace std;

int binaryDecimal(int num){
    int n=num;
    int dec = 0;
    int pow =1; //2^0 2^1 2^2 ..
    while(n>0){
        int lastDig = n%10;
        n = n/10; 
        dec += lastDig * pow;
        pow = pow*2;
    }
    return dec;
}
int main(){
    cout << binaryDecimal(1010);
    return 0;
}