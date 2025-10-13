#include<iostream>
using namespace std;

int main(){
    int a = 10;
    float b = 5.5;
    float result = a + (int)b;
    cout << result << endl;

    // double to int
    double pi = 3.14159;
    int intpi = (int)pi;
    cout << intpi << endl;

    // float to char
    float f = 65.55;
    char c = (char)f;
    cout << c << endl;

    // int to float
    int x = 10;
    int y = 3.0;
    float z = x/(float)y;
    cout << z << endl;


    return 0;
}