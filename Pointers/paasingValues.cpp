#include<iostream>
using namespace std;

void passByvalue(int a){ //pass by value
    a =20;
    cout << a << endl; //call by value
}
void passByreferencePtr(int *ptr){ //pass by pointers
    *ptr = 20;
    cout << *ptr << endl;
}
void passByreferenceVar(int &e){
    e=21;
    cout << e <<endl;
}
int main(){
    int a =10;
    passByvalue(a);
    cout << a << endl;
    int b =15;
    passByreferencePtr(&b);
    cout << b << endl;
    int c=10;
    int &d = c;
    cout << c << " " << d << " ";
    cout << &c << " " << &d << endl;
    int f = 13;
    passByreferenceVar(f);
    cout << f << endl;
    return 0;
}