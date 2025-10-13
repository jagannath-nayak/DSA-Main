#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 6;
    // XOR method
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

}
