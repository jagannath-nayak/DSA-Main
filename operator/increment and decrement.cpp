#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout << a << endl;
    // a ki value 6 ho jayegi
    cout << ++ a << endl; // pre increment
    // print kara toh 6 hi print hoga , but a ki value 7 ho chuki hogi
    cout << a++ << endl; // post increment
    // ab a ki value 7 hogi 
    cout << a << endl;
    // ab a ki value 6 hogi
    cout << --a << endl; // pre decrement
    // print kara toh 6 hi print hoga , but a  ki value 5 ho chuki hogi
    cout << a-- << endl; // post decrement
    // ab a ki value 5 hogi
    cout << a << endl;



    return 0;
}