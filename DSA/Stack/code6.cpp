#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int>& s, int val){
    // Base case
    if(s.empty()){
        s.push(val);
        return;
    }
    // ek case mera
    int topE = s.top();
    s.pop();
    // RE
    insertAtbottom(s, val);
    // Backtrack
    s.push(topE);
}

void reversestack(stack<int>& s){
    // Base case
    if(s.empty()) return;
    // ek case mera
    int topE = s.top();
    s.pop();
    // Baki RE dekh lega
    reversestack(s);
    // backtrack
    insertAtbottom(s, topE);
}

void print(stack<int>& s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reversestack(s);
    print(s);


    return 0;
}