#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    // constructor
    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val){
        if(top == size-1){
            // stack is full
            cout << "stack overflow" << endl;
        }
        else{
            top++;
            arr[top] = val;
        }
    }

    void pop(){
        if(top == -1){
            // no elements to pop
            cout << "stack underflow" << endl;
        }
        else{
            top--;
        }
    }

    int getsize(){
        return top+1;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int getTop(){
        if(top == -1){
            cout << "There is no element at top" << endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    void print(){
        cout << "stack printing" << endl;
        for(int i=0; i<=top; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    // // creation
    // stack<int> s;
    // // insertion
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // // size
    // cout << s.size() << endl;
    // cout << s.top() << endl;

    Stack s(5);
    s.print();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.print();

    cout << s.getTop() << endl;
    cout << s.getsize() << endl;
    cout << s.isEmpty() << endl; 

    s.pop();
    s.print();

    s.pop();
    s.print();

    s.pop();
    s.print();

    s.pop();
    s.print();

    s.pop();
    s.print();

    s.pop();
    s.print();

    s.pop();
    s.print();

    cout << s.getsize() << endl;

    


    return 0;
}