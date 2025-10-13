#include<iostream>
using namespace std;

// int x = 2;

// void fun(){
//     int x = 60;
//     cout << x << endl;
//     ::x = 100;
//     cout << ::x << endl;

// }

#define PI 3.14  // MACROS

float circleArea(float r){
    return PI * r * r;
}

int main(){
    // ::x = 4; // global variable
    // int x = 20;
    // // cout << x << endl;
    // // cout << ::x << endl; // accessing global variable
    
    // {
    //     int x = 50;
    //     // cout << x << endl;
    //     // cout << ::x << endl;
    // }

    // fun();

    // const int x = 20; // x is constant;
    // cout << x << endl;

    // const with pointers
    // const int *a  = new int(2);
    // //*a = 20; // cannot change the content of pointer
    // cout << *a << endl;
    // int b = 5;
    // a = &b; // pointer itself can be reassigned;
    // cout << *a << endl;
    // delete a;
    // int b = 5;
    // a = &b;
    // cout << *a << endl;
    
    // // CONST pointer but non - CONST data
    // int *const a = new int(2);
    // *a = 5;
    // cout << *a << endl;

    // int b = 50 
    // a = &b; // ye nhi chelga kyu pointer CONST;

    // // const pointer && and const data 
    // const int *const a = new int(5);
    // cout << *a << endl;

    cout << circleArea(13.4) << endl;




    return 0;
}