#include<iostream>
#include<queue>
using namespace std;

class Queue{
    private:
    int *arr;
    int n;
    int front;
    int rear;

    public:
    Queue(int size){
        arr = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(rear == n-1){
            cout << "overflow" << endl;
        }
        else if(front == -1 && rear == -1){
            // inserting first element
            rear++;
            front++;
            arr[rear] = val;
        }
        else{
            // normal flow
            rear++;
            arr[rear] = val;
        }

    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "underflow" << endl;
        }
        else if(front == rear){
            // single element
            front = -1;
            rear = -1;
        }
        else{
            // normal flow
            front++;
        }

    }

    int getFront(){
        if(front == -1){
            cout << "Queue is empty" << endl;
        }
        else{
            return arr[front];
        }

    }

    int getRear(){
        if(rear == -1){
            cout << "Queue is empty" << endl;
        }
        else{
            return arr[rear];
        }

    }

    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else rear - front + 1;
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else return false;
    }

};


int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // cout << q.getSize() << endl;
    // cout << q.getFront() << endl;

    cout << q.getSize() << endl;
    q.pop();
    q.pop();
    cout << q.getSize() << endl;





    return 0;
}