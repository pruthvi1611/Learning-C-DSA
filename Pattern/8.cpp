#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        int s=i%2 ? 1:0;
        for(int j=1;j<=i;j++){
            cout << (s++%2 ? 1:0);
        }
        cout << "\n";
    }
}