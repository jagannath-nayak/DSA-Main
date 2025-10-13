#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int>& s, int value){
    // Base case
    if(s.empty()){
        s.push(value);
        return;
    }
    // Ek case mera
    int topElement = s.top();
    s.pop();
    // baki RE dekh lega
    insertAtbottom(s, value);
    // Backtrack
    s.push(topElement);

}

int main(){
    // stack<char> s;
    // string name = "Jagannath";

    // // insertion of characters into stack
    // for(int i=0; i<name.length(); i++){
    //     char ch = name[i];
    //     s.push(ch);
    // }
    // // retrieval of characters from stack
    // while(!s.empty()){
    //     cout << s.top();
    //     s.pop();

    //}

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value = 13;
    insertAtbottom(s, value);
    
    // traverse
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }



    return 0;
}